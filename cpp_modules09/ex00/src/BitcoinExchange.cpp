#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(std::string path)
{
    this->Bpath = path;
    this->db.open(this->Bpath.c_str(), std::fstream::in);
    if (check_db() == false){
            std::cerr<<"Error: Check file format try again!"<<std::endl;
            this->db.close();
            exit(1);
    }
    assign_map();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    (void)obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    (void)obj;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{}

bool BitcoinExchange::check_db()
{
    int cnt = 0;
    int flag = 0;
    std::size_t found = 0;
    std::string date;

    if (this->db.is_open() == false){
        std::cerr<<"Error opening file"<<std::endl;
        exit(1);
    }
    while (std::getline(this->db, this->line)) {
        if (cnt == 0){
            if (this->line.compare("date,exchange_rate") != 0) {
                flag -= 1;
            }
        }
        else{
            found = line.rfind(',');
            if (found != std::string::npos) {
                date.assign(line, 0, found);
                if (isvaliddate(date) == false)
                    flag -= 1;
            }
            else{ flag -= 1; }
            if (isvalidvalue(line.substr(found + 1)) == false)
                flag -= 1;
        }
        cnt++;
    }
    this->db.close();
    if (flag < 0) return false;
    return true;
}

bool BitcoinExchange::isvaliddate(std::string date)
{
    if (date.length() != 10) return false;
    if (date[4] != '-' || date[7] != '-') return false;
    for (int i = 0; i < 4; i++)
        if (!isdigit(date[i])) return false;
    for (int i = 5; i < 7; i++)
        if (!isdigit(date[i])) return false;
    for (int i = 8; i < 10; i++)
        if (!isdigit(date[i])) return false;
    int mon = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if (!(mon >= 1 && mon <= 12)) return false;
    if (!(day >= 1 && day <= 31)) return false;
    return (true);
}

bool BitcoinExchange::isvalidvalue(std::string value)
{
    std::istringstream ss(value);
    double valued;

    if (!(ss >> valued)) return false;
    else if (!ss.eof()) return false;
    return (true);
}

bool BitcoinExchange::isvalidrange(std::string value)
{
    std::istringstream ss(value);
    double valued;

    ss >> valued;
    if (valued < 0) {
        std::cerr<<"Error: not a positive number."<<std::endl;
        return (false);
    }
    if (valued > 1000) {
        std::cerr<<"Error: too large a number."<<std::endl;
        return (false);
    }
    return (true);
}

void BitcoinExchange::assign_map()
{
    int cnt = 0;
    std::string date;
    std::istringstream ss;
    double Dvalue;

    this->db.open(this->Bpath.c_str(), std::fstream::in);
    if (this->db.is_open() == false) {
        std::cerr<<"Error opening file"<<std::endl;
        exit(1);
    }
    while (std::getline(this->db, this->line)) {
        if (cnt > 0) {
            date.assign(line, 0, 10);
            ss.str(this->line.substr(11));
            ss >> Dvalue;
            mdb[date] = Dvalue;
            ss.clear();
        }
        cnt++;
    }
    this->db.close();
}

void BitcoinExchange::print_map()
{
    std::map<std::string, double>::iterator it;
    for (it = this->mdb.begin(); it != this->mdb.end(); it++)
        std::cout << it->first << " : " << it->second << std::endl;
}

void BitcoinExchange::to_evaluate(std::string path)
{
    std::fstream input(path.c_str(), std::fstream::in);
    std::string input_line;
    int cnt = 0;
    std::string date;

    if (input.is_open() == false) {
        std::cerr<<"Error opening file"<<std::endl;
        exit(1);
    }
    while (std::getline(input, input_line)) {
        if (cnt == 0){
            if(input_line.compare("date | value") != 0){
                std::cerr<<"Error: Check file format try again!"<<std::endl;
                input.close();
                exit(1);
            }
        }
        else
        {
            if (check_valid_input(input_line, date) == false)
                continue;
            if (find_bit(date, input_line) == false)
                continue;
        }
        cnt++;
    }
    input.close();
}

bool BitcoinExchange::find_bit(const std::string date, std::string &input_line)
{
    std::istringstream ss;
    double Dvalue;
    double Ovalue;

    ss.str(input_line.substr(13));
    ss >> Dvalue;
    Ovalue = -1;
    std::map<std::string, double>::iterator it = this->mdb.lower_bound(date);
    if (it != this->mdb.end() && it->first == date) {
        Ovalue = it->second;
    }
    else if (it != this->mdb.begin()){
        --it;
        Ovalue = it->second;
    }
    else {
        std::cerr<<"Not found date!"<<std::endl;
        return (false);
    }
    std::cout<<date<<" => "<< Dvalue << " = " << Dvalue * Ovalue<<std::endl;
    return (true);
}

bool BitcoinExchange::check_valid_input(std::string &input_line, std::string &date)
{
    if(input_line.compare(10, 3, " | ") != 0){
        std::cerr<<"Error: bad input => "<<input_line<<std::endl;
        return (false);
    }
    if (input_line.length() < 14){
        std::cerr<<"Error: bad input => "<<input_line<<std::endl;
        return (false);
    }
    date.assign(input_line, 0, 10);
    if (isvaliddate(date) == false){
        std::cerr<<"Error: bad date fomat => "<<date<<std::endl;
        return (false);
    }
    if(isvalidvalue(input_line.substr(13)) == false){
        std::cerr<<"Error: bad value fomat => "<<input_line.substr(13)<<std::endl;
        return (false);
    }
    if(isvalidrange(input_line.substr(13)) == false)
        return (false);
    return (true);
}




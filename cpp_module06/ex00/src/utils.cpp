#include "../include/utils.hpp"

TAG check_is_right(std::string &str, double &num)
{
    if(str.find('.') > 0)
    {
        if (str[str.find('.') + 1] == '\0')
        {
            std::cout << "argument error sysntax is error checkagain" << str[str.find('.')] <<std::endl;
            return (TGERROR);
        }
    }
    std::stringstream ss(str);
    std::string check_decimal_point;
    if (str.length() == 1)
    {
        num = str[0];
        return (TGCHAR);
    }
    ss >> num;
    if (ss.fail())
    {
        std::cout << "argument error sysntax is error checkagain" << std::endl;
        return (TGERROR);
    }
    ss >> check_decimal_point;
    if (!check_decimal_point.length() || check_decimal_point == "f")
    {
        if (num >= MIN_CHAR && num <= MAX_CHAR)
        {
            if (check_decimal_point == "f")
                return (TCHARF);
            return (TGCHAR);
        }
        else if (num >= MIN_INT && num <= MAX_INT)
        {
            if (check_decimal_point == "f")
                return (TGINTF);
            return (TGINT);
        }
        else
            return (TGDOUBLE);
    }
    else
    {
        std::cout << "argument error sysntax is error checkagain" << std::endl;
        return (TGERROR);
    }
}

void check_nan_inf(std::string& str, TAG& tag, double& num)
{
    if (str == "nan" || str == "+inf" || str == "-inf" || str == "-inff" || str == "+inff" || str == "inff" || str == "inf")
        tag = TGEXP;
    else
    {
        tag = check_is_right(str, num);
    }
}

void check_type(std::string &str, TAG tag, double num)
{
    print_type_char(num, tag);
    print_type_int(num, tag);
    print_type_float(num, tag, str);
    print_type_double(num, tag, str);
}

void print_type_char(double c, TAG tag)
{
    char cc = static_cast<char>(c);
    if (tag == TGEXP)
        std::cout<<"char: impossible"<<std::endl;
    else if (tag != TCHARF && tag != TGCHAR)
        std::cout<<"char: is OverFlow!"<<std::endl;
    else if (std::isprint(cc))
        std::cout<<"char: "<<cc<<std::endl;
    else
        std::cout<<"char: Non displayable"<<std::endl;
}

void print_type_int(double i, TAG tag)
{
    int ii = static_cast<int>(i);
    if (tag == TGEXP)
        std::cout<<"int: impossible"<<std::endl;
    else if (tag > TGINTF)
        std::cout<<"int: is OverFlow!"<<std::endl;
    else
        std::cout<<"int: "<<ii<<std::endl;
}

void print_type_float(double f, TAG tag, std::string str)
{
    float ff = static_cast<float>(f);
    if (tag == TGEXP)
    {
        if (str == "+inff" || str == "-inff" || str == "inff")
            std::cout<<"float: "<<str<<std::endl;
        else
        {
            str += "f";
            std::cout<<"float: "<<str<<std::endl;
        }
    }
    else
    {
        if (std::isinf(ff))
            std::cout<<"float: inff"<<std::endl;
        else
        {
            int test = static_cast<int>(f);
            bool flag = static_cast<double>(test) == f;
            if (flag)
                std::cout<<"float: "<<ff<<".0f"<<std::endl;
            else
                std::cout<<"float: "<<ff<<"f"<<std::endl;
        }
    }
}

void print_type_double(double d, TAG tag, std::string str)
{
    if (tag == TGEXP)
    {
        if (str == "+inff" || str == "-inff" || str == "inff")
        {
            std::string temp;
            temp.append(str, 0, str.length() - 1);
            std::cout<<"double: "<<temp<<std::endl;
        }
        else
        {
            std::cout<<"double: "<<str<<std::endl;
        }
    }
    else
    {
        if (std::isinf(d))
            std::cout<<"double: inf"<<std::endl;
        else
        {
            int test = static_cast<int>(d);
            bool flag = static_cast<double>(test) == d;
            if (flag)
                std::cout<<"double: "<<d<<".0"<<std::endl;
            else
                std::cout<<"double: "<<d<<std::endl;
        }
    }
}
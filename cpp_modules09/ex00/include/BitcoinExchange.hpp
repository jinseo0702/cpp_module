#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <sstream>

class BitcoinExchange
{
private:
    std::fstream db;
    std::string line;
    std::string Bpath;
    std::map<std::string, double> mdb;
private:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange &operator=(const BitcoinExchange &obj);
public:
    BitcoinExchange(std::string path);
    ~BitcoinExchange();
    bool check_db();
    void print_map();
    void assign_map();
    void to_evaluate(std::string path);
    bool isvaliddate(std::string date);
    bool ifLeapYear(int year);
    bool checkDay(int mon); 
    bool isvalidvalue(std::string value);
    bool isvalidrange(std::string value);
    bool check_valid_input(std::string &input_line, std::string &date);
    bool find_bit(const std::string date, std::string &input_line);
};

#endif

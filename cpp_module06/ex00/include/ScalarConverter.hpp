#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <sstream>
#include <cctype>
#include <iostream>

class ScalarConverter
{
private:
    ScalarConverter(/* args */);
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter &operator=(const ScalarConverter& other);
    ~ScalarConverter();
public:
    static void convert(std::string str);
};




#endif

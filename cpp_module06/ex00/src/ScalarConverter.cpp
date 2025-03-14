#include "../include/ScalarConverter.hpp"
#include "../include/utils.hpp"

ScalarConverter::ScalarConverter(void)
{}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{}

void ScalarConverter::convert(std::string str)//공백일때도 처리?
{
    TAG tag = TGINIT;
    double num = 0;

    check_nan_inf(str, tag, num);
    if (tag == TGERROR)
        return ;
    check_type(str, tag, num);
}

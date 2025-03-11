#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <sstream>
#include <limits>
#include <cctype>
#include <cmath>
#include <iostream>

#define MAX_CHAR std::numeric_limits<char>::max()
#define MIN_CHAR std::numeric_limits<char>::min()
#define MAX_INT std::numeric_limits<int>::max()
#define MIN_INT std::numeric_limits<int>::min()
#define MAX_FLOAT std::numeric_limits<float>::max()
#define MIN_FLOAT std::numeric_limits<float>::min()
#define MAX_DOUBLE std::numeric_limits<double>::max()
#define MIN_DOUBLE std::numeric_limits<double>::min()

enum TAG{
    TGINIT = 0,
    TGCHAR,
    TCHARF,
    TGINT,
    TGINTF,
    TGDOUBLE,
    TGEXP,
    TGERROR = -1,
};

TAG check_is_right(std::string &str, double &num);
void check_nan_inf(std::string& str, TAG& tag, double& num);
void check_type(std::string &str, TAG tag, double num);

void print_type_char(double c, TAG tag);
void print_type_int(double i, TAG tag);
void print_type_float(double f, TAG tag, std::string str);
void print_type_double(double d, TAG tag, std::string str);

#endif
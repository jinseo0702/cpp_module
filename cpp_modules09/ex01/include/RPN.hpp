#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <cctype>

class RPN
{
private:
    std::stack<long> S;
private:
    RPN(const RPN &obj);
    RPN &operator=(const RPN &obj);
    bool is_operators(char c);
    bool is_minus(char c);
    long calculater_oper(int num1, int num2, char oper);
public:
    RPN();
    ~RPN();
    void do_rpn(std::string obj);
    void checkArgu(std::string obj);
    static void p_error(const std::string obj);
};


#endif
#include "../include/RPN.hpp"

RPN::RPN( )
{}

RPN::RPN(const RPN &obj)
{
    (void)obj;
}

RPN &RPN::operator=(const RPN &obj)
{
    (void)obj;
    return (*this);
}

RPN::~RPN()
{}

void RPN::p_error(const std::string obj)
{
    std::cerr << obj << std::endl;
    exit(1);
}

bool RPN::is_operators(char c)
{
    return(c == '+' || c == '-' || c == '*' || c == '/');
}

bool RPN::is_minus(char c)
{
    return(isspace(c));
}

void RPN::checkArgu(std::string obj)
{
    std::string::iterator it = obj.begin();
    std::string::iterator end = obj.end();
    int cnt = 0;
    int operand = 0;
    int operators = 0;
    int space = 0;

    for (; it != end; ++it){
        if (it == obj.begin()){
            if (!(isdigit(*it) != 0 || isspace(*it) != 0)){
                p_error("Error");
            }
        }
        if (is_operators(*it) == true){
            if (((it + 1) != obj.end()) && isspace(*(it + 1)) == 0){
                p_error("Error");
            }
            operators++;
        }
        else if(isdigit(*it) != 0){
            if (isspace(*(it + 1)) == 0){
                p_error("Error");
            }
            operand++;
        }
        else if (isspace(*it) != 0){
            space++;
        }
        cnt++;
    }
    if ((operators + operand + space) != cnt)
        p_error("Error");
    if ((operand - 1) != operators)
        p_error("Error");;
}

long RPN::calculater_oper(int num1, int num2, char oper)
{
    long result = 0;

    if (oper == '+'){
        result = num2 + num1;
    }
    else if (oper == '-'){
        result = num2 - num1;
    }
    else if (oper == '*'){
        result = num2 * num1;
    }
    else if (oper == '/'){
        if (num2 == 0){
            p_error("Error");
        }
        else if (num1 == 0){
            p_error("Error");
        }
        else{
            result = num2 / num1;
        }
    }
    return (result);
}

void RPN::do_rpn(std::string obj)
{
    std::string::iterator it = obj.begin();
    std::string::iterator end = obj.end();
    long result = 0;
    long num1 = 0;
    long num2 = 0;

    for (; it != end; ++it){
        if (isdigit(*it)){
            S.push(*it - '0');
        }
        if (is_operators(*it)){
            if (S.size() < 2){
                p_error("Error");
            }
            else{
                num1 = S.top();
                S.pop();
                num2 = S.top();
                S.pop();
                result = calculater_oper(num1, num2, *it);
                S.push(result);
            }
        }
    }
    if (S.size() == 1){
        std::cout << S.top() << std::endl;
    }
    else{
        p_error("Error");
    }
}
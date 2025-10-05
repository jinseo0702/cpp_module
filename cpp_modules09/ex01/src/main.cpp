#include "../include/RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2){
        RPN::p_error("Error");
    }
    RPN rpn;
    rpn.checkArgu(argv[1]);
    rpn.do_rpn(argv[1]);

    return (0);
}
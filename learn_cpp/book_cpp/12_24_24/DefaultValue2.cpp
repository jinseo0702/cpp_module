#include <iostream>

int Adder(int num1 = 1, int num2 = 2);

int Adder(int num1, int num2)
{
    return (num1 + num2);
}

int main(void)
{
    std::cout<<Adder()<<std::endl;
    std::cout<<Adder(5)<<std::endl;
    std::cout<<Adder(20, 7)<<std::endl;
    return (0);
}
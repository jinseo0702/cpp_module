#include <iostream>

int main(void)
{
    double val1;
    double val2;
    double result;

    std::cout<<"첫 번째 숫자 입력: ";
    std::cin>>val1;

    std::cout<<"두 번째 숫자 입력: ";
    std::cin>>val2;
    result = val1 + val2;
    std::cout<<"덧 셈결과: "<<result<<std::endl;
    return (0);
}
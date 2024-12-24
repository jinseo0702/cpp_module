#include <iostream>

void Myfunc(void)
{
    std::cout<<"Hello World!\n";
}

void Myfunc(int num)
{
    std::cout<<"num is "<<num<<std::endl;
}

int main(void)
{
    Myfunc();
    Myfunc(20);
    return (0);
}
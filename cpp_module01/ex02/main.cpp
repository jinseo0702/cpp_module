#include <string>
#include <iostream>

int main(void)
{
    std::string str("Hi this is  brain");
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout<<"string str is "<<&str<<std::endl;
    std::cout<<"string ptr is "<<ptr<<std::endl;
    std::cout<<"string ref is "<<&ref<<std::endl;

    std::cout<<"string str is "<<str<<std::endl;
    std::cout<<"string ptr is "<<*ptr<<std::endl;
    std::cout<<"string ref is "<<ref<<std::endl;
    return (0);
}
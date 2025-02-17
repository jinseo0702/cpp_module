#include "./Bureaucrat.hpp"

int main(void)
{
    try
    {
        std::cout<<"test1 start NoneValue"<<std::endl;
        Bureaucrat test1;
    }
    catch(const char *e)
    {
        std::cerr << e <<std::endl;
    }
    try
    {
        std::cout<<"test2 start Minus Value"<<std::endl;
        Bureaucrat test2("jinseo", -10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout<<"test3 start Over 150"<<std::endl;
        Bureaucrat test3("jinseo", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout<<"test4 start Nomal"<<std::endl;
        Bureaucrat test4("test4", 3);
        std::cout<<test4.getName()<<std::endl;
        std::cout<<test4.getGrade()<<std::endl;
        std::cout<<"test4 increment Over Grade"<<std::endl;
        test4.incrementGrade(10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout<<"test5 start Nomal"<<std::endl;
        Bureaucrat test5("test5", 3);
        std::cout<<test5.getName()<<std::endl;
        std::cout<<test5.getGrade()<<std::endl;
        std::cout<<"test5 decrement Over Grade"<<std::endl;
        test5.decrementGrade(153);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout<<"test6 start Nomal"<<std::endl;
        Bureaucrat test6("test6", 3);
        std::cout<<test6.getName()<<std::endl;
        std::cout<<test6.getGrade()<<std::endl;
        std::cout<<"test6 decrement Nomal Grade"<<std::endl;
        test6.decrementGrade(10);
        std::cout<<test6.getGrade()<<std::endl;
        std::cout<<"test6 increment Nomal Grade"<<std::endl;
        test6.incrementGrade(10);
        std::cout<<test6.getGrade()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
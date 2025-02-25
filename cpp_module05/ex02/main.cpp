#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
// {
//     std::cout<<"----------------------------------------------------------"<<std::endl;
//     try
//     {
//         std::cout<<"test2 start Minus Value"<<std::endl;
//         Bureaucrat test2("jinseo", 1);
//         Form Formtest1("From", -1, 1);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// {
//     std::cout<<"----------------------------------------------------------"<<std::endl;
//     try
//     {
//         std::cout<<"test3 Form overflow"<<std::endl;
//         Bureaucrat test3("test3", 1);
//         Form Formtest1("From", 151, 151);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
{
    std::cout<<"----------------------------------------------------------"<<std::endl;
        Bureaucrat test3("test3", 1);
        Bureaucrat test4("test4", 140);
        try
        {
            ShrubberyCreationForm  Hello("Hello");
            test3.signForm(Hello);
            test3.executeForm(Hello);
            // Hello.execute(test3);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(const char *e)
        {
            std::cerr << e << '\n';
        }
        
        std::cout<<test3<<std::endl;
        // std::cout<<Hello<<std::endl;
}
// {
//     std::cout<<"----------------------------------------------------------"<<std::endl;
//         std::cout<<"test4 Form Normal and same grade"<<std::endl;
//         Bureaucrat test4("test4", 10);
//         Form Formtest1("From", 10, 10);
//         test4.signForm(Formtest1);
//         std::cout<<test4<<std::endl;
//         std::cout<<Formtest1<<std::endl;
// }
// {
//     std::cout<<"----------------------------------------------------------"<<std::endl;
//         std::cout<<"test5 Form Normal and Normal grade"<<std::endl;
//         Bureaucrat test5("test5", 10);
//         Form Formtest1("From", 20, 20);
//         test5.signForm(Formtest1);
//         std::cout<<test5<<std::endl;
//         std::cout<<Formtest1<<std::endl;
// }

    return (0);
}
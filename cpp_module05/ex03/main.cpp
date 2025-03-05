#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <stdlib.h>
#include <unistd.h>


int main(void)
{
// {
//     std::cout<<"----------------------------------------------------------"<<std::endl;
//     Bureaucrat test3("test3", 1);
//     Bureaucrat test4("test4", 140);
//     AForm *pol[3];
//     pol[0] = new ShrubberyCreationForm("Shrubbery");
//     pol[1] = new RobotomyRequestForm("Robot");
//     pol[2] = new PresidentialPardonForm("Pardon");
//     srand(getpid());
//     try
//     {
//         int random = rand() % 3;
//         test3.signForm(*pol[random]);
//         test3.executeForm(*pol[random]);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     catch(const char *e)
//     {
//         std::cerr << e << '\n';
//     }
//     for (int i = 0; i < 3; i++)
//         delete pol[i];
//     return (0);
// }

    {
        std::string arr[4];
        arr[0] = "Shrubbery Creation";
        arr[1] = "Robotomy Request";
        arr[2] = "Presidential Pardon";
        arr[3] = "Error";
        Intern someRandomIntern;
        Bureaucrat test3("test3", 1);
        AForm* rrf;
        srand(getpid());
        int random = rand() % 4;
        rrf = someRandomIntern.makeForm(arr[random], "Bender");
        if(rrf != NULL)
        {
            test3.signForm(*rrf);
            test3.executeForm(*rrf);
            delete rrf;
        }
    }

}
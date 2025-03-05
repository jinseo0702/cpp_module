#include "RobotomyRequestForm.hpp"
#include "./Form_GradeTooHighException.hpp"
#include "./Form_GradeTooLowException.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
AForm("RobotomyRequestForm", 72, 45)
{
    throw "No target RobotomyRequestForm is Not good\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("RobotomyRequestForm", 72, 45)
{
    this->settarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
AForm(other.getName(), other.getreSign(), other.getExecute())
{
    this->settarget(other.getTarget());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if(this != &other)
    {
        this->settarget(other.getTarget());
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<"Good bye RobotomyRequestForm!"<<std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true)
    {
        if (executor.getGrade() > this->getExecute())
            throw GradeTooLowException();
        else
        {
            int random = rand() % 2;
            srand(getpid());
            if(random)
            {
                std::cout <<this->getTarget()<<" Weeeing drilling Weeeing Weeeing Weeeing" << std::endl;
            }
            else
            {
                std::cout<< this->getTarget() << "Failed drilling" << std::endl;
            }
        }
    }
}

#include "PresidentialPardonForm.hpp"
#include "./Form_GradeTooHighException.hpp"
#include "./Form_GradeTooLowException.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
AForm("PresidentialPardonForm", 25, 5)
{
    throw "No target PresidentialPardonForm is Not good\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("PresidentialPardonForm", 25, 5)
{
    this->settarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
AForm(other.getName(), other.getreSign(), other.getExecute())
{
    this->settarget(other.getTarget());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if(this != &other)
    {
        this->settarget(other.getTarget());
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<"Good bye PresidentialPardonForm!"<<std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true)
    {
        if (executor.getGrade() > this->getExecute())
            throw GradeTooLowException();
        else
        {
            std::cout<< this->getTarget() <<" were pardoned by Zaphod Beblebrox!"<<std::endl;
        }
    }
}

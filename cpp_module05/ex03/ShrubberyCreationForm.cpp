#include "ShrubberyCreationForm.hpp"
#include "./Form_GradeTooHighException.hpp"
#include "./Form_GradeTooLowException.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
AForm("ShrubberyCreationForm", 145, 137)
{
    throw "No target ShrubberyCreationForm is Not good\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", 145, 137)
{
    this->settarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
AForm(other.getName(), other.getreSign(), other.getExecute())
{
    this->settarget(other.getTarget());
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if(this != &other)
    {
        this->settarget(other.getTarget());
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"Good bye ShrubberyCreationForm!"<<std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true)
    {
        if (executor.getGrade() > this->getExecute())
            throw GradeTooLowException();
        else
        {
            std::string mix = this->getTarget() + "_shrubbery";
            std::fstream fs;
            fs.open(mix.c_str(), std::fstream::out | std::fstream::trunc);
            if (!fs.is_open())
                throw "file is not open!\n";
            fs<<"                    $           \n";
            fs<<"                   $$$          \n";
            fs<<"                  $$$$$$        \n";
            fs<<"                 $$$$$$$$       \n";
            fs<<"                $$$$$$$$$$      \n";
            fs<<"               $$$$$$$$$$$$     \n";
            fs<<"              $$$$$$$$$$$$$$    \n";
            fs<<"             $$$$$$$$$$$$$$$$   \n";
            fs<<"            $$$$$$$$$$$$$$$$$$  \n";
            fs<<"           $$$$$$$$$$$$$$$$$$$$ \n";
            fs<<"          $$$$$$$$$$$$$$$$$$$$$$\n";
            fs<<"                    @@          \n";
            fs<<"                    @@          \n";
            fs<<"                    @@          \n";
            fs<<"                    @@          \n";
            fs.close();
        }
    }
    else
        throw "Not signed!\n";
}


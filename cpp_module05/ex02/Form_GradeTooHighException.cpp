#include "./Form_GradeTooHighException.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade TooHight!!!!\n");
}
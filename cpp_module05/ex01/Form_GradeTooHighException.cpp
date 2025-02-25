#include "./Form_GradeTooHighException.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade TooHight!!!!\n");
}
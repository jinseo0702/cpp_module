#include "./Form_GradeTooLowException.hpp"

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade TooLow!!!!\n");
}
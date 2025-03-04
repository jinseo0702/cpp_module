#include "./Form_GradeTooLowException.hpp"

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade TooLow!!!!\n");
}
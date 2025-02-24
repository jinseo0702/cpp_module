#include "./GradeTooLowException.hpp"

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade TooLow!!!!\n");
}
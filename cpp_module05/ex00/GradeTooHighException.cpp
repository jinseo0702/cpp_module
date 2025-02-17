#include "./GradeTooHighException.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade TooHight!!!!\n");
}
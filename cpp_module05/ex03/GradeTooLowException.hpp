#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include "./Bureaucrat.hpp"

class Bureaucrat::GradeTooLowException : public std::exception
{
public:
    virtual const char* what() const throw();
};

#endif
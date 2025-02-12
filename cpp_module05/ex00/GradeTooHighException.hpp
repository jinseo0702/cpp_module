#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include "./Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception
{
public:
    virtual const char* what() const throw();
};

#endif
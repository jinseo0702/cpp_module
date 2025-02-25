#ifndef FORM_GRADETOOHIGHEXCEPTION_HPP
#define FORM_GRADETOOHIGHEXCEPTION_HPP

#include "./Form.hpp"

class Form::GradeTooHighException : public std::exception
{
public:
    virtual const char* what() const throw();
};

#endif
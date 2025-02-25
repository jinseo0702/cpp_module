#ifndef FORM_GRADETOOLOWEXCEPTION_HPP
#define FORM_GRADETOOLOWEXCEPTION_HPP

#include "./Form.hpp"

class Form::GradeTooLowException : public std::exception
{
public:
    virtual const char* what() const throw();
};

#endif
#ifndef FORM_GRADETOOLOWEXCEPTION_HPP
#define FORM_GRADETOOLOWEXCEPTION_HPP

#include "./AForm.hpp"

class AForm::GradeTooLowException : public std::exception
{
public:
    virtual const char* what() const throw();
};

#endif
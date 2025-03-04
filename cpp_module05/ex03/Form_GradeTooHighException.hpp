#ifndef FORM_GRADETOOHIGHEXCEPTION_HPP
#define FORM_GRADETOOHIGHEXCEPTION_HPP

#include "./AForm.hpp"

class AForm::GradeTooHighException : public std::exception
{
public:
    virtual const char* what() const throw();
};

#endif
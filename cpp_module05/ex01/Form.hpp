#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    class GradeTooHighException;
    class GradeTooLowException;
    const std::string Fname;
    bool sign;
    const int required_sign;
    const int required_execute;
public:
    Form(void);
    Form(std::string name, int sign, int execute);
    Form(const Form& other);
    Form &operator=(const Form& other);
    ~Form();
    std::string const &getName() const;
    bool getSign() const;
    int getreSign() const;
    int getExecute() const;
    void beSigned(const Bureaucrat& obj);
};

std::ostream &operator<<(std::ostream &out, const Form& For);

#endif
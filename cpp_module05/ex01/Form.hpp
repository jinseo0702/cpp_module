#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "./Bureaucrat.hpp"

class Form
{
private:
    const std::string Fname;
    bool sign;
    const int required_sign;
    const int required_execute;
    class GradeTooHighException;
    class GradeTooLowException;
public:
    Form(void);
    Form(std::string name, int sign, int execute);
    Form(const Form& other);
    Form &operator=(const Form& other);
    ~Form();
    std::string const &getName() const;
    int getSign();
    int const getSign() const;
    int const getExecute() const;
    void beSigned(const Bureaucrat& obj) const;
};

std::ostream &operator<<(std::ostream &out, const Form& Bur);

#endif
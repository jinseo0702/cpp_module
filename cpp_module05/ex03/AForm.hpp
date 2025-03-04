#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
    class GradeTooHighException;
    class GradeTooLowException;
private:
    const std::string Fname;
    std::string Ftarget;
    bool sign;
    const int required_sign;
    const int required_execute;
public:
    AForm(void);
    AForm(std::string name, int sign, int execute);
    AForm(const AForm& other);
    AForm &operator=(const AForm& other);
    virtual ~AForm();
    std::string const &getName() const;
    std::string const &getTarget() const;
    bool getSign() const;
    int getreSign() const;
    int getExecute() const;
    void beSigned(const Bureaucrat& obj);
    void excheck(const Bureaucrat& obj);
    void settarget(std::string target);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm& For);

#endif
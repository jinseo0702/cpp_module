#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "./Form.hpp"

class Form;

class Bureaucrat
{
private:
    class GradeTooHighException;
    class GradeTooLowException;
    const std::string B_name;
    int B_grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &otehr);
    Bureaucrat &operator=(const Bureaucrat &otehr);
    ~Bureaucrat();
    std::string const &getName() const;
    int getGrade() const;
    void incrementGrade(int num);
    void decrementGrade(int num);
    void signForm(Form& For) const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& Bur);

#endif

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "./AForm.hpp"

class AForm;

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
    void signForm(AForm& For) const;
    void checkForm(AForm& For) const;
    void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& Bur);

#endif

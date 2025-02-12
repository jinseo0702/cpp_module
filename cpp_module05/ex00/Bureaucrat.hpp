#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    class GradeTooHighException;
    class GradeTooLowException;
    const std::string B_name;
    int B_grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &otehr);
    Bureaucrat &operator=(const Bureaucrat &otehr);
    ~Bureaucrat();
    std::string const &getName() const;
    int const getGrade() const;
    void incrementGrade(int num);
    void decrementGrade(int num);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& Bur);

#endif

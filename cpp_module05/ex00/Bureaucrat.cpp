#include "./Bureaucrat.hpp"
#include "./GradeTooHighException.hpp"
#include "./GradeTooLowException.hpp"

Bureaucrat::Bureaucrat() : B_grade(-1)
{
    throw "insert value\n";
}
Bureaucrat::Bureaucrat(std::string name, int grade) : B_name(name), B_grade(grade)
{
        if (this->B_grade < 1)
            throw GradeTooLowException();
        else if (this->B_grade > 150)
            throw GradeTooHighException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &otehr) : B_name(otehr.B_name)
{
    this->B_grade = otehr.B_grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &otehr)
{
    if (this != &otehr)
    {
        this->B_grade = otehr.B_grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Good bye Bureaucrat"<<std::endl;
}

std::string const &Bureaucrat::getName() const
{
    return (this->B_name);
}

int Bureaucrat::getGrade() const
{
    return (this->B_grade);
}

void Bureaucrat::incrementGrade(int num)
{
    this->B_grade -= num;
    try
    {
        if (this->B_grade < 1)
            throw GradeTooHighException();
        else if (this->B_grade > 1)
            throw GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade(int num)
{
    this->B_grade += num;
    try
    {
        if (this->B_grade < 1)
            throw GradeTooHighException();
        else if (this->B_grade > 1)
            throw GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& Bur)
{
    // <name>, bureaucrat grade <grade>.
    out << Bur.getName();
    out << ", bureaucrat grade ";
    out << Bur.getGrade()<<"."<<std::endl;
    return (out);
}

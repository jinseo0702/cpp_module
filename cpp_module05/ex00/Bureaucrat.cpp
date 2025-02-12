#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : B_grade(-1)
{}
Bureaucrat::Bureaucrat(std::string name, int grade) : B_name(name), B_grade(grade)
{}
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
{}

std::string const &Bureaucrat::getName() const
{
    return (this->B_name);
}

int const Bureaucrat::getGrade() const
{
    return (this->B_grade);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& Bur)
{
    // <name>, bureaucrat grade <grade>.
    out << Bur.getName();
    out << ", bureaucrat grade ";
    out << Bur.getGrade();
}
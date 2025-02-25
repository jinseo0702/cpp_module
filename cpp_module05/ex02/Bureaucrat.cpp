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
    //name에 대한 예외처리를 해야하는걸까?
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

void Bureaucrat::signForm(AForm& For) const
{
    try
    {
        For.beSigned(*this);
        std::cout<<this->B_name<<" signed "<<For.getName()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<this->B_name<<" couldn't signed "<<e.what()<<std::endl;
        throw GradeTooLowException();
    }
}

void Bureaucrat::checkForm(AForm& For) const
{
    try
    {
        For.excheck(*this);
        std::cout<<this->B_name<<" Do execute ! "<<For.getName()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<this->B_name<<" couldn't execute "<<e.what()<<std::endl;
        throw GradeTooLowException();
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout<<this->B_name<<" executed "<<form.getName()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& Bur)
{
    out << Bur.getName();
    out << ", bureaucrat grade ";
    out << Bur.getGrade()<<"."<<std::endl;
    return (out);
}

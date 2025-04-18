#include "./Form.hpp"
#include "./Form_GradeTooHighException.hpp"
#include "./Form_GradeTooLowException.hpp"

Form::Form(void) :
Fname("No_Name"),
sign(false),
required_sign(0),
required_execute(0)
{
    throw "No name Form is Not good\n";
}

Form::Form(std::string name, int sign, int execute) :
Fname(name),
sign(false),
required_sign(sign),
required_execute(execute)
{
    if (this->required_execute < 1 || this->required_sign < 1)
        throw GradeTooLowException();
    else if (this->required_execute > 150 || this->required_sign > 150)
        throw GradeTooHighException();
}

Form::Form(const Form& other) :
Fname(other.Fname),
sign(other.sign),
required_sign(other.required_sign),
required_execute(other.required_execute)
{
}

Form &Form::operator=(const Form& other)
{
    //const 에 대한 내용은 다 예외처리를 해야하는걸까?
    if (this != &other)
    {
        this->sign = other.sign;
    }
    return (*this);
}

Form::~Form()
{
    std::cout<<"Good bye Form!"<<std::endl;
}

std::string const &Form::getName() const
{
    return(this->Fname);
}

bool Form::getSign() const
{
    return (this->sign);
}

int Form::getreSign() const
{
    return (this->required_sign);
}

int Form::getExecute() const
{
    return (this->required_execute);
}

void Form::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > this->required_sign)
        throw GradeTooLowException();
    else
        this->sign = true;
}

std::ostream &operator<<(std::ostream &out, const Form& For)
{
    out<<"name is : "<<For.getName()<<"\n";
    out<<"sign is : "<<std::boolalpha<<For.getSign()<<"\n"; 
    out<<"required_sign is : "<<For.getreSign()<<"\n"; 
    out<<"required_execute : "<<For.getExecute()<<"\n";
    return(out);
}
#include "./AForm.hpp"
#include "./Form_GradeTooHighException.hpp"
#include "./Form_GradeTooLowException.hpp"

AForm::AForm(void) :
Fname("No_Name"),
Ftarget("No_Name"),
sign(false),
required_sign(0),
required_execute(0)
{
    throw "No name AForm is Not good\n";
}

AForm::AForm(std::string name, int sign, int execute) :
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

AForm::AForm(const AForm& other) :
Fname(other.Fname),
Ftarget(other.Ftarget),
sign(other.sign),
required_sign(other.required_sign),
required_execute(other.required_execute)
{
}

AForm &AForm::operator=(const AForm& other)
{
    //const 에 대한 내용은 다 예외처리를 해야하는걸까?
    if (this != &other)
    {
        this->Ftarget = other.Ftarget;
        this->sign = other.sign;
    }
    return (*this);
}

AForm::~AForm()
{
    std::cout<<"Good bye AForm!"<<std::endl;
}

std::string const &AForm::getName() const
{
    return(this->Fname);
}

std::string const &AForm::getTarget() const
{
    return(this->Ftarget);
}

bool AForm::getSign() const
{
    return (this->sign);
}

int AForm::getreSign() const
{
    return (this->required_sign);
}

int AForm::getExecute() const
{
    return (this->required_execute);
}

void AForm::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > this->required_sign)
        throw GradeTooLowException();
    else
        this->sign = true;
}

void AForm::excheck(const Bureaucrat& obj)
{
    if (obj.getGrade() > this->required_execute)
        throw GradeTooLowException();
}

void AForm::settarget(std::string target)
{
    this->Ftarget = target;
}

std::ostream &operator<<(std::ostream &out, const AForm& For)
{
    out<<"name is : "<<For.getName()<<"\n";
    out<<"target is : "<<For.getTarget()<<"\n";
    out<<"sign is : "<<std::boolalpha<<For.getSign()<<"\n"; 
    out<<"required_sign is : "<<For.getreSign()<<"\n"; 
    out<<"required_execute : "<<For.getExecute()<<"\n";
    return(out);
}
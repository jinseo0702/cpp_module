#include "./Form.hpp"

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
{}

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
{}

std::string const &Form::getName() const
{}

int Form::getSign()
{}

int const Form::getSign() const
{}

int const Form::getExecute() const
{}

void Form::beSigned(const Bureaucrat& obj) const
{}


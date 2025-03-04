#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "./AForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();
    virtual void execute(Bureaucrat const & executor) const;
};

#endif

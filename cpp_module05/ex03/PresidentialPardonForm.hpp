#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "./AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();
    virtual void execute(Bureaucrat const & executor) const;
};

#endif

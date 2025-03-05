#ifndef INTERN_HPP
#define INTERN_HPP

#include "./AForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include <string>
#include <sstream>
#include <iostream>

class Intern
{
private:
    std::string arr[4];
public:
    Intern(void);
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();
    AForm *makeForm(const std::string Form, const std::string Target);
    std::string &ft_tolower(std::string& str);
};

#endif

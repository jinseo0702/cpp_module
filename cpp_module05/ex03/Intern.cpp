#include "./Intern.hpp"

Intern::Intern(void)
{
    this->arr[0] = "shrubberycreation";
    this->arr[1] = "robotomyrequest";
    this->arr[2] = "presidentialpardon";
    this->arr[3] = "error";
}

Intern::Intern(const Intern &other)
{
    for (size_t i = 0; i < 4; i++)
    {
        this->arr[i] = other.arr[i];
    }
}

Intern &Intern::operator=(const Intern &other)
{
    if (this != &other)
    {
        for (size_t i = 0; i < 4; i++)
        {
            this->arr[i] = other.arr[i];
        }
    }
    return (*this);
}

Intern::~Intern()
{
}

std::string &Intern::ft_tolower(std::string& str)
{
    int idx = 0;
    while (str[idx])
    {
        if (str[idx] >= 'A' && str[idx] <= 'Z')
            str[idx] = str[idx] + 32;
        idx++;
    }
    return (str);
}

AForm *Intern::makeForm(const std::string Form, const std::string Target)
{
    std::stringstream ss(Form);
    std::string word;
    std::string result;
    int cnt = 0;
    int compare = 0;
    while (ss >> word)
        result += word;
    result = ft_tolower(result);
    for (int i = 0; i < 4; i++)    
    {
        compare = result.compare(arr[i]);
        compare += cnt;
        switch (compare)
        {
            case 0:
            {
                std::cout << "Intern creates ShrubberyCreationForm" << std::endl;    
            }
            return (new ShrubberyCreationForm(Target));
            break;
            case 1:
            {
                std::cout << "Intern creates RobotomyRequestForm" << std::endl;
            }
                return (new RobotomyRequestForm(Target));
            break;

            case 2:
            {
                std::cout << "Intern creates PresidentialPardonForm" << std::endl;
            }
                return (new PresidentialPardonForm(Target));
            break;
        }
        cnt++;
    }
    std::cout << "Syntex error Check again!" << std::endl;
    return (NULL);
}

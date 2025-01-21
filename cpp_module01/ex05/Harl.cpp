#include "./Harl.hpp"

Harl::Harl(void)
{
    {
        this->compare[0] = &Harl::debug;
        this->compare[1] = &Harl::info;
        this->compare[2] = &Harl::warning;
        this->compare[3] = &Harl::error;
    }
    {
        this->insert[0].assign("DEBUG");
        this->insert[1].assign("INFO");
        this->insert[2].assign("WARNING");
        this->insert[3].assign("ERROR");
    }
    {
        this->flag = false;
    }
}

Harl::~Harl(void)
{
    std::cout<<"Harl is gone"<<std::endl;
}

void Harl::debug(void)
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"<<std::endl;
}

void Harl::info(void)
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more"<<std::endl;
}

void Harl::warning(void)
{
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void)
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->insert[i].compare(0, this->insert[i].length(), level) == 0)
        {
            (this->*compare[i])();
            this->flag = true;
            break;
        }
    }
    check_line();
}

void Harl::check_line(void)
{
    if (this->flag == false)
    {
        std::cout<<"Harl didn't complain!! HAHA!"<<std::endl;
    }
}
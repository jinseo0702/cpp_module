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
}

Harl::~Harl(void)
{
    std::cout<<"Harl is gone"<<std::endl;
}

void Harl::debug(void)
{
    std::cout<<"[ DEBUG ]"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger."<<std::endl;
    std::cout<<"I really do!"<<std::endl<<std::endl;
}

void Harl::info(void)
{
    std::cout<<"[ INFO ]"<<std::endl;
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!"<<std::endl;
    std::cout<<"If you did, I wouldn’t be asking for more"<<std::endl<<std::endl;
}

void Harl::warning(void)
{
    std::cout<<"[ WARNING ]"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl<<std::endl;
}

void Harl::error(void)
{
    std::cout<<"[ ERROR ]"<<std::endl;
    std::cout<<"This is unacceptable!"<<std::endl;
    std::cout<<"I want to speak to the manager now."<<std::endl<<std::endl;
}

void Harl::complain(std::string level)
{
    int idx = 0;
    int le_cnt = -1;
    for (; idx < 4; idx++)
    {
        if (this->insert[idx].compare(0, this->insert[idx].length(), level) == 0)
        {
            le_cnt = idx;
            break;
        }
    }
    switch (le_cnt)
    {
        case 0:
            (this->*compare[0])();
        case 1:
            (this->*compare[1])();
        case 2:
            (this->*compare[2])();
        case 3:
            (this->*compare[3])();
            break;
        default:
            std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
            break;
    }
}

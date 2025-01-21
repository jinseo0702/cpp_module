#include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->type = NULL;
    nullptr;
    this->name.append(name);
}

void HumanB::attack(void)
{
    if (this->type == NULL)
        std::cout<<this->name<<" attacks fail"<<std::endl;
    else
        std::cout<<this->name<<" attacks with their "<<this->type->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
    this->type = &type;
}
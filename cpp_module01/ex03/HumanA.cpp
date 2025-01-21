#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type)
    : type(type)
{
    this->name.append(name);
}

void HumanA::attack(void)
{
    std::cout<<this->name<<" attacks with their "<<this->type.getType()<<std::endl;
}
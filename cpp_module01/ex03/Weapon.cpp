#include "./Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->type = str;
}

Weapon::Weapon( void )
{
    
}

const std::string &Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(std::string str)
{
    this->type = str;
}
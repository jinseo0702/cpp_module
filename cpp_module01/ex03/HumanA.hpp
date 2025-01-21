#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include "./Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &type;
public:
    HumanA(std::string name, Weapon &type);
    void attack(void);
};

#endif
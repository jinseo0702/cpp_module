#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& others);
    DiamondTrap& operator=(const DiamondTrap& others);
    ~DiamondTrap ();
public:
    void attack(const std::string& target);
    void whoAmI();
};

#endif


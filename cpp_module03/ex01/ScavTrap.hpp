#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& others);
    ScavTrap& operator=(const ScavTrap& others);
    ~ScavTrap ();
public:
    void attack (const std::string& target);
    void guardGate();
};

#endif
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap& others);
    FragTrap& operator=(const FragTrap& others);
    ~FragTrap ();
public:
    void highFivesGuys(void);
};

#endif
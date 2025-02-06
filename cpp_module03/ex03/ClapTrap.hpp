#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int Hit_point;
    unsigned int Energy_point;
    unsigned int Attack_damage;
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& others);
    ClapTrap& operator=(const ClapTrap& others);
    virtual ~ClapTrap();
public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    bool Check_point(void);
    std::string getname(void) const;
    unsigned int get_Hit_p(void) const;
    unsigned int get_E_p(void) const;
    unsigned int get_A_D(void) const;
};

#endif
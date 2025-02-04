#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& others);
    ScavTrap& operator=(const ScavTrap& others);
    ~ScavTrap () override;
public:
    void attack (const std::string& target) override;
};

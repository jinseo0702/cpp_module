#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "./Keytable.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
private:
    std::string name;
    Keytable table[4];
    int t_idx;
public:
    Character(/* args */);
    Character(std::string const &name);
    Character(const Character& other);
    Character& operator=(const Character& other);
    ~Character ();
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
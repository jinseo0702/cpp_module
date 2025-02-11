#ifndef KEYTABLE_HPP
#define KEYTABLE_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

class Keytable
{
private:
    AMateria *key;
    bool value;
public:
    Keytable();
    Keytable(AMateria *key, bool value);
    Keytable(Keytable const &other);
    Keytable& operator=(Keytable const &other);
    ~Keytable();
    AMateria *get_key();
    bool get_value() const;
    void set_value(bool status);
    void set_key(AMateria *);
};

#endif
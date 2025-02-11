#include "./Keytable.hpp"

Keytable::Keytable()
{
    key = NULL;
    value = false;
}

Keytable::Keytable(AMateria *key, bool value) : key(key), value(value)
{}

Keytable::Keytable(Keytable const &other) : key(other.key), value(other.value)
{}

Keytable &Keytable::operator=(Keytable const &other)
{
    if (this != &other)
    {
        this->key = other.key;
        this->value = other.value;
    }
    return (*this);
}

Keytable::~Keytable()
{}

AMateria *Keytable::get_key()
{
    return (this->key);
}

bool Keytable::get_value() const
{
    return (this->value);
}

void Keytable::set_value(bool status)
{
    this->value = status;
}

void Keytable::set_key(AMateria *set)
{
    this->key = set;
}
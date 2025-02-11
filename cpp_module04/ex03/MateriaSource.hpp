#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include<string>
#include<iostream>
#include"IMateriaSource.hpp"
#include"./Keytable.hpp"

class MateriaSource : public IMateriaSource
{
private:
    Keytable table[4];
    int idx;
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif
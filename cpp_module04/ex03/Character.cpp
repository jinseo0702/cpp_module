#include "Character.hpp"

Character::Character(/* args */) : t_idx(0)
{
    std::cout<<"Charactor Make default constructor non name 1 option"<<std::endl;
    std::cout<<"Charactor addr is :"<<this<<std::endl;
}

Character::Character(std::string const &name) : name(name) , t_idx(0)
{
    std::cout<<"Charactor Make default constructor name 2 option"<<std::endl;
    std::cout<<"Charactor addr is :"<<this<<std::endl;
}

Character::Character(const Character& other) : name(other.name), t_idx(other.t_idx)
{
    for (size_t i = 0; i < 4; i++)
    {
        this->table[i] = other.table[i];
    }
    std::cout<<"Charactor Make copy constructor name 3 option"<<std::endl;
    std::cout<<"Charactor addr is :"<<this<<std::endl;
}

Character &Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->t_idx = other.t_idx;
        for (size_t i = 0; i < 4; i++)
        {
            this->table[i] = other.table[i];
        }   
    }
    std::cout<<"Charactor Make Assignment operator constructor name 4 option"<<std::endl;
    std::cout<<"Charactor addr is :"<<this<<std::endl;
    return (*this);
}

Character::~Character ()
{
    std::cout<<"Charactor Destructor"<<std::endl;
    std::cout<<"Charactor addr is :"<<this<<std::endl;
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (this->t_idx == 4)
    {
        std::cout<<"Inventroy is Full!"<<std::endl;
        return ;
    }
    if(m)
    {
        table[t_idx].set_key(m);
        table[t_idx].set_value(true);
        this->t_idx++;
    }
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout<<"Check idx range!!"<<std::endl;
        return ;
    }
    table[idx].set_value(false);
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0)
    {
        std::cout<<"Check idx range!!"<<std::endl;
        return ;
    }
    if(this->table[idx].get_value() == true)
    {
        this->table[idx].get_key()->use(target);
    }
    else
    {
        std::cout<<"You don't have permission idx :"<<idx<<std::endl;
    }
}

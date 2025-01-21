#include "./Zombie.hpp"

int Zombie::index = 0;

void Zombie::announce( void )
{
    std::cout<<name<<" : BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie( void )
{
    this->idx = index;
    index += 1;
    std::cout<<"index is : "<<this->idx<<std::endl;
}

Zombie::~Zombie(void)
{
        std::cout<<this->name<<" : dead that is in heap, idx is : "<<idx<<std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}
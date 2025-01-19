#include "./Zombie.hpp"

void Zombie::announce( void )
{
    std::cout<<name<<" : BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie( std::string name, where_flag::where flag )
{
    this->name = name;
    this->flag = flag;
}

Zombie::~Zombie(void)
{
    if (flag == where_flag::heap)
    {
        std::cout<<name<<" : dead that is in heap"<<std::endl;
    }
    else
    {
        std::cout<<name<<" : dead that is in stack"<<std::endl;
    }
}
#include "./Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *newzombie = new Zombie(name, where_flag::heap);
    return(newzombie);
}
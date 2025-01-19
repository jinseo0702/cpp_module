#include "./Zombie.hpp"

void randomChump( std::string name )
{
    Zombie newZombie(name, where_flag::stack);

    newZombie.announce();
}
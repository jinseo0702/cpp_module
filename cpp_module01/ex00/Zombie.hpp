#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

namespace where_flag
{
    enum where
    {
        heap,
        stack
    };
}

class Zombie
{
    private :
        std::string name;
        where_flag::where flag; 
    public :
        Zombie( std::string name, where_flag::where flag );
        ~Zombie();
        void announce( void );
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif
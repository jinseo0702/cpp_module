#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Zombie
{
    private :
        std::string name;
        int idx;
        static int index;
    public :
        Zombie( std::string name );
        Zombie( void );
        ~Zombie();
        void announce( void );
        void set_name(std::string name);
};

Zombie * zombieHorde(int N, std::string name);

#endif
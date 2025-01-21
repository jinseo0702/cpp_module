#include "./Zombie.hpp"

Zombie * zombieHorde(int N, std::string name)
{
    if (N < 0)
    {
        std::cout<<"N is under zero!! allocated error"<<std::endl;
        exit(1);
    }
    Zombie * fir_zom = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        fir_zom[i].set_name(name);
    }
    return (fir_zom);
}
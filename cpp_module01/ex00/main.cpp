#include "./Zombie.hpp"

int main(void)
{
    Zombie *newZombie2 = newZombie("heap");

    newZombie2->announce();
    randomChump("stack");
    delete newZombie2;
    return (0);
}
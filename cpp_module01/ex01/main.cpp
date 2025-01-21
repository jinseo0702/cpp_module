#include "./Zombie.hpp"

int main(void)
{
    int N = 0;
    if (N < 0)
        return (0);
    Zombie * g_zom = zombieHorde(N, "zombies");
    for (int i = 0; i < N; i++)
        g_zom[i].announce();
    delete[] g_zom;
    return (0);
}
#include "../include/total.hpp"

int main(void)
{
    Base *base = generate();

    identify(base);
    identify(*base);
    delete base;
    return (0);
}
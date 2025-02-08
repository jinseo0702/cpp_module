#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
// delete j;
// delete i;
/*
size_t idx = 6;
size_t half = idx / 2;
const Animal* ani[idx];
for (size_t i = 0; i < idx; i++)
{
    if (i < half)
        ani[i] = new Dog();
    else
    {
        ani[i] = new Cat();
    }    
}
for (size_t i = 0; i < idx; i++)
{
    delete ani[i];
    ani[i] = NULL;
}*/

Dog a;
Dog c(a);

return 0;
}
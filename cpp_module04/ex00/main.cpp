#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
const WrongAnimal* W_a = new WrongAnimal();
const WrongAnimal* W_c = new WrongCat();
std::cout << W_a->getType() << " " << std::endl;
std::cout << W_c->getType() << " " << std::endl;
    W_a->makeSound();
    W_c->makeSound();
delete meta;
delete j;
delete i;
delete W_a;
delete W_c;
return 0;
}
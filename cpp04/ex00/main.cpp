#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* x = new WrongCat();

    std::cout << x->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    x->makeSound();
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    meta2->makeSound();

    delete x;
    delete i;
    delete j;
    delete meta;
    delete meta2;

    return 0;
}
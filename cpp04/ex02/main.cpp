#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    //const Animal *animal= new animal();
    const Animal* animal_array[10];

    for(std::string::size_type i = 0; i < 10; i++){
        if(i < 5)
            animal_array[i] = new Cat();
        else
            animal_array[i] = new Dog();
    }

    std::cout << std::endl;
    for (int j = 0; j < 10 ; j++){
        animal_array[j]->makeSound();
    }
    for (int x = 0; x < 10 ; x++){
        delete animal_array[x];
    }    
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const WrongAnimal* meta2 = new WrongAnimal();
    // const WrongAnimal* x = new WrongCat();

    // std::cout << x->getType() << " " << std::endl;
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // x->makeSound();
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();
    // meta2->makeSound();

    // delete x;
    // delete i;
    // delete j;
    // delete meta;
    // delete meta2;

    return 0;
}
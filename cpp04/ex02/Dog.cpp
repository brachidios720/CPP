#include "Dog.hpp"
#include "Animal.hpp"


Dog::Dog() : Animal("Dog"){
    std::cout << "default cat constructor class called" << std::endl;
}

Dog::Dog(const Dog &copy){
    *this = copy;
    std::cout << " copy constructor of cat class called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
    if(this != &copy)
        *this = copy;
    std::cout << " assignement operator of Cat class called" << std::endl;
    return(*this);
}

void    Dog::makeSound() const{
    std::cout << " WOUUUUUFFFFFFFF " << std::endl;
}

Dog::~Dog(){
    std::cout << "destructor of Cat class called" << std::endl;
}
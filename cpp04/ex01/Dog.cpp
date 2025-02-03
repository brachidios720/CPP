#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog"),  _brain(new Brain()){
    std::cout << "default cat constructor class called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), _brain(new Brain(*copy._brain)){
    std::cout << " copy constructor of cat class called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
    if(this != &copy){
        *this = copy;
        delete this->_brain;
        this->_brain = new Brain(*copy._brain);
    }
    std::cout << " assignement operator of Cat class called" << std::endl;
    return(*this);
}

void    Dog::makeSound() const{
    std::cout << " WOUUUUUFFFFFFFF " << std::endl;
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << "destructor of Cat class called" << std::endl;
}
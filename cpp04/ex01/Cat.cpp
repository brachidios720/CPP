#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()){
    std::cout << "default cat constructor class called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy), _brain(new Brain(*copy._brain)){
    std::cout << " copy constructor of cat class called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
    if(this != &copy){
        *this = copy;
        delete this->_brain;
        this->_brain = new Brain(*copy._brain);
    }

    std::cout << " assignement operator of Cat class called" << std::endl;
    return(*this);
}

void    Cat::makeSound() const{
    std::cout << " MMMIIIIAAAAAOUUUUUU" << std::endl;
}

Cat::~Cat(){
    delete this->_brain;
    std::cout << "destructor of Cat class called" << std::endl;
}
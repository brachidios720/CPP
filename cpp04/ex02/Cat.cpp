#include "Cat.hpp"
#include "Animal.hpp"


Cat::Cat() : Animal("Cat"){
    std::cout << "default cat constructor class called" << std::endl;
}

Cat::Cat(const Cat &copy){
    *this = copy;
    std::cout << " copy constructor of cat class called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
    if(this != &copy)
        *this = copy;
    std::cout << " assignement operator of Cat class called" << std::endl;
    return(*this);
}

void    Cat::makeSound() const{
    std::cout << " MMMIIIIAAAAAOUUUUUU" << std::endl;
}

Cat::~Cat(){
    std::cout << "destructor of Cat class called" << std::endl;
}
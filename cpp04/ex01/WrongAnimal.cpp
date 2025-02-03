#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(){
    this->_type = "shark with misiles";
    std::cout << " default Wrong Animal constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type){
    std::cout << " the constructor of the WrongAnimal class called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    *this = copy;
    std::cout << "copy of the Wrong animal class" << std::endl; 
}

WrongAnimal    &WrongAnimal::operator=(const WrongAnimal &copy){
    if(this != &copy)
        *this = copy;
    std::cout << "assignement ogf wrong animal called" << std::endl;
    return(*this);
}

void    WrongAnimal::makeSound() const {
    std::cout << "piou piou BBBBBBBBOOOOOOUUUUUUUMMMMM" << std::endl;
}

std::string     WrongAnimal::getType()const {
    return(this->_type);
}

WrongAnimal::~WrongAnimal(){
    std::cout << " Destructor of Wrond Animal classe calles " << std::endl;
}
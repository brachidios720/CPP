#include "Animal.hpp"



Animal::Animal(){
    this->_type = "mamouth";
    std::cout << "animal type wihtout _type called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type){
    std::cout << "Animal class constructor called" << std::endl;
}

Animal::Animal(const Animal &copy){
    *this = copy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal&     Animal::operator=(const Animal &copy){
    if(this != &copy)
        this->_type = copy._type;
    std::cout << "assignement of Animal class are called" << std::endl;
    return(*this);
}

void        Animal::makeSound() const{
    std::cout << " MMMOOOOOOOOOUUUUUUUUUMOOOOOUUUUTTTT " << std::endl; 
}

std::string     Animal::getType() const{
    return(this->_type);
}

Animal::~Animal(){
    std::cout << "destructor of animal class" << std::endl;
}
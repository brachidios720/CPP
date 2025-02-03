#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "default cat constructor class called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
    *this = copy;
    std::cout << " copy constructor of cat class called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    if(this != &copy)
        *this = copy;
    std::cout << " assignement operator of Cat class called" << std::endl;
    return(*this);
}

void    WrongCat::makeSound() const{
    std::cout << " MMMIIIIAAAAAOUUUUUU" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "destructor of Cat class called" << std::endl;
}
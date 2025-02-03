#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain() : matrice(){
    std::cout << " Default constructor of the brain class called " << std::endl;
}

Brain::Brain(const Brain &copy){
    for (std::string::size_type i = 0; i < 100 ; i++){
        this->matrice[i] = copy.matrice[i];
    }
}

Brain   &Brain::operator=(const Brain &copy){
    if(this != &copy)
    {
        for(std::string::size_type i = 0; i < 100 ; i++){
                this->matrice[i] = copy.matrice[i];
        }
        std::cout << "assignement for the brain class called" << std::endl;
    }
    return(*this);
}

Brain::~Brain(){
    std::cout << "Destructor of the brain class called" << std::endl;
}

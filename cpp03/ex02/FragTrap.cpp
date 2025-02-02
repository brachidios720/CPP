#include "FragTrap.hpp"
#include <iostream>
#include <string>


FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->_attackdamage = 30;
    this->_energypoints = 100;
    this->_hitpoints = 100;
    std::cout << "Constructor called for FragTrap : " << this->_name << std::endl; 
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy){
    *this = copy;
    std::cout << "FragTrap copy constructor called for : " << this->_name << std::endl; 
}

FragTrap    &FragTrap::operator=(const FragTrap &target){
    if(this != &target)
        ClapTrap::operator=(target);
    std::cout << "FragTrap assignement operator called for : " << this->_name << std::endl;
    return(*this);
}


void    FragTrap::highFivesGuys(){
    std::cout << "FragTrap : " << this->_name << " do a big high five" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "Destructor called for FragTrap : " << this->_name << std::endl; 
}
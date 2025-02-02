#include "ScavTrap.hpp"
#include <iostream>
#include <string>



ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_attackdamage = 20;
    this->_energypoints = 50;
    this->_hitpoints = 100;
    std::cout << "Constructor called for ScavTrap : " << this->_name << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy){
    *this = copy;
    std::cout << "ScavTrap copy constructor called for : " << this->_name << std::endl; 
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &other){
    if(this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap assignement operator called for : " << this->_name << std::endl;
    return(*this);
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap : " << this->_name << " is actualy in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string &target){
    std::cout << "ScavTrap : " << this->_name << " attack " << target << " and causing " << this->_attackdamage << " of damage, for the glory " << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "Destructor called for ScavTrap : " << this->_name << std::endl;
}
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0){
        std::cout << "Constructor Called for ClapTrap : " << this->_name << std::endl;
}

void    ClapTrap::attack(const std::string &target){
    if(this->_hitpoints > 0 && this->_energypoints > 0)
    {
        this->_energypoints--;
        std::cout << "Claptrap : " << this->_name << " attacks " << target << " causing " <<
        this->_attackdamage << " points of damage !" << std::endl;
    }
    else if(this->_energypoints < 0)
        std::cout << "Claptrap : " << this->_name << "don't have enought enrgypoints !" << std::endl;
    else if(this->_hitpoints < 0)
        std::cout << "Claptrap : " << this->_name << "don't have enought hitspoints !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
        if(static_cast<int>(amount) >= this->_hitpoints)
            this->_hitpoints = 0;
        else
            this->_hitpoints -= amount;
        std::cout << "ClapTrap : " << this->_name << " take " << amount << " points of damage !" << 
        " it have actually " << this->_hitpoints << " hit points and " << this->_energypoints << " energy points ! " << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
        if(this->_energypoints > 0 && this->_hitpoints > 0)
        {
            this->_energypoints--;
            this->_hitpoints += amount;
            std::cout << "ClapTrap : " << this->_name << " repairs itself, it recovered " << amount << " it's have now : " << 
            this->_hitpoints << " hit points and it's have now : " << this->_energypoints << " energy points " << std::endl;
        }
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructeur Called for ClapTrap : " << this->_name << std::endl;
}
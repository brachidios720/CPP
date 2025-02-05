#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() {
    std::cout << "A new zombie is created !" << std::endl;
}

void    Zombie::annouce() const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string &name)
{
    this->_name = name;
}
Zombie::~Zombie() {
    std::cout << _name << ": destroyed !" << std::endl;
}
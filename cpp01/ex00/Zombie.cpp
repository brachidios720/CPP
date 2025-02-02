#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string &name) : _name(name) {
    std::cout << _name << ": created !" << std::endl;
}

void    Zombie::annouce() const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << _name << ": destroyed !" << std::endl;
}
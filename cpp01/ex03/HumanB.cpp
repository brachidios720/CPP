#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL)
{

}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void    HumanB::attack() const{
    if(!this->_weapon)
        std::cout << this->_name << " attack with nothing "<< std::endl;  
    else  
        std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB()
{

}
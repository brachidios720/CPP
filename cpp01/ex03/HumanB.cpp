#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) : _name(name)
{

}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
    if(!_weapon)
        this->_weapon = NULL;
}

void    HumanB::attack() const{
    std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB()
{

}
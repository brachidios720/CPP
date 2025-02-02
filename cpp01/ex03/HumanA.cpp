#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

void    HumanA::attack() const{
    std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{

}
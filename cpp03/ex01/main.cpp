#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

int main(){


    std::cout << "---------constructor----------" << std::endl;
    ScavTrap fakebob("fakebob");
    std::cout << "------------------------------" << std::endl;
    fakebob.attack("enemy");
    fakebob.takeDamage(25);
    fakebob.beRepaired(20);
    fakebob.guardGate();
    std::cout << "---------destructor-----------" << std::endl;
}
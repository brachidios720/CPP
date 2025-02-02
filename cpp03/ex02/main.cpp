#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

int main(){


    std::cout << "-----------------ClapTrap-------------" << std::endl;
    ClapTrap bob("Clap");
    bob.attack("Target");
    bob.takeDamage(5);
    bob.beRepaired(3);

    std::cout << "------------------ScavTrap------------" << std::endl;
    
    ScavTrap bob1("Scav");
    bob1.attack("Target");
    bob1.takeDamage(10);
    bob1.beRepaired(5); 
    bob1.guardGate();  

    std::cout << "------------------FragTrap------------" << std::endl;

    FragTrap bob2("Frag");
    bob2.attack("Target");
    bob2.takeDamage(20);
    bob2.beRepaired(15);
    bob2.highFivesGuys();

    std::cout << "------------------destructor------------" << std::endl;
}
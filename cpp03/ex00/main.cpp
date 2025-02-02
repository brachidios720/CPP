#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main(){

    std::cout << "--------------Creat ClapTrap--------------" << std::endl;
    std::cout << std::endl;
    
    ClapTrap bob("bob");
    ClapTrap bob2("bob2");

    std::cout << std::endl;
    std::cout   << "--------------Action----------------" << std::endl;
    std::cout << std::endl;
    bob.attack("piou piou");
    bob2.takeDamage(5);
    bob2.beRepaired(2);
    
    std::cout << std::endl;
    std::cout << "-----------------destruction--------------" << std::endl;
    std::cout << std::endl;
}
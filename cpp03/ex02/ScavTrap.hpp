#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#pragma once 

class ScavTrap : public ClapTrap { 

            public :
                    ScavTrap(const std::string name);
                    ScavTrap(const ScavTrap &copy);
                    void    guardGate();
                    void    attack(const std::string &target);
                    ScavTrap &operator=(const ScavTrap &other);
                    ~ScavTrap();

};

#endif

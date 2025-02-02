#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#pragma once


class ClapTrap {


    public :
                ClapTrap (const std::string &name);
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
                ~ClapTrap();


    protected :
                std::string _name;
                int         _hitpoints;
                int         _energypoints;
                int         _attackdamage;

};

#endif


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB{

    public:
        HumanB(const std::string &name);
        void    attack() const;
        void    setWeapon(Weapon &weapon);
        ~HumanB();
    private:
        std::string     _name;
        Weapon*         _weapon;
};

#endif
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{

    public:
        HumanA(const std::string &name, Weapon &weapon);
        void    attack() const;
        ~HumanA();
    private:
        std::string     _name;
        Weapon&         _weapon;
};

#endif
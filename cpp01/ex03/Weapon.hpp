#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{

    public:
        Weapon(const std::string &type);
        const   std::string& getType() const;
        void    setType(std::string newtype);
        ~Weapon();

    private:
        std::string _type;
};

#endif
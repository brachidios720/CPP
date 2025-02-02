#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
# pragma once

class Zombie {

    public:
        Zombie();
        void    annouce(void) const;
        void    setName(std::string &name);
        ~Zombie();
    private:
        std::string _name;
};

#endif
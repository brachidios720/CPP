#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
# pragma once

class Zombie {

    public:
        Zombie(std::string &name);
        void    annouce(void) const;
        ~Zombie();
    private:
        std::string _name;
};

#endif
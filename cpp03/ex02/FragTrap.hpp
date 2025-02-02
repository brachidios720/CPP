#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#pragma once

class FragTrap : public ClapTrap { 

            public :
                    FragTrap(const std::string name);
                    FragTrap(const FragTrap &copy);
                    FragTrap &operator=(const FragTrap &other);
                    ~FragTrap();

                    void    highFivesGuys();
};

#endif
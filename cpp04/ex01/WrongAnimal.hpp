#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"
#pragma once

class WrongAnimal : public Animal{

    public:
            WrongAnimal();
            WrongAnimal(const std::string &type);
            WrongAnimal(const WrongAnimal &copy);
            WrongAnimal&operator=(const WrongAnimal &target);
            void    makeSound() const;
            std::string     getType() const;
            ~WrongAnimal();
    protected:
            std::string _type;
};
#endif
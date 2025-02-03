#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#pragma once

class Dog : public Animal{

        public:
                Dog();
                Dog(const Dog &copy);
                Dog&operator=(const Dog &copy);
                virtual void makeSound() const;
                virtual ~Dog();
};

#endif 
#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#pragma once

class Dog : public Animal{

        public:
                Dog();
                Dog(const Dog &copy);
                Dog&operator=(const Dog &copy);
                virtual void makeSound() const;
                virtual ~Dog();
        private:
                Brain *_brain;
};

#endif 
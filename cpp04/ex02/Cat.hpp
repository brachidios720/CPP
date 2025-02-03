#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#pragma once

class Cat : public Animal {

    public:
            Cat();
            Cat(const Cat &copy);
            Cat&operator=(const Cat &copy);
            virtual void makeSound() const;
            virtual ~Cat();
};

#endif
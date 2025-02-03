#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#pragma once

class WrongCat : public WrongAnimal{

        public:
                WrongCat();
                WrongCat(const WrongCat &copy);
                WrongCat&operator=(const WrongCat &copy);
                void makeSound() const;
                ~WrongCat();
};

#endif 
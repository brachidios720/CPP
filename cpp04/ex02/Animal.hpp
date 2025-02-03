#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
#pragma once

class Animal {


        public:
                Animal();
                Animal(const std::string &type);
                Animal(const Animal &copy);
                Animal &operator=(const Animal &copy);
                virtual void makeSound() const = 0;
                std::string     getType() const;
                virtual ~Animal();
        protected:
                std::string _type;
};


#endif
#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>

class Base{

    public:
            virtual ~Base();

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
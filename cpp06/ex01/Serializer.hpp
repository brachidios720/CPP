#pragma once


#include <iostream>
#include <string>
#include <stdint.h>

typedef struct SData
{
    int value1;
    int value2;
    int value3;

}   Data;

class Serializer{



    public:

            static uintptr_t serialize(Data* ptr);
            static Data* deserialize(uintptr_t raw);

    private:
            Serializer();
            Serializer(const Serializer &cpy);
            Serializer&operator=(const Serializer &other);
            ~Serializer();
};
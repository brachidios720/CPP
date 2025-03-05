#include "Serializer.hpp"


int main (){

    Data data;

    data.value1 = 4;
    data.value2 = 45;
    data.value3 = 130;

    Data *ptr(&data);

    std::cout << "value 1 = " << ptr->value1 << std::endl;
    std::cout << "value 2 = " << ptr->value2 << std::endl;
    std::cout << "value 3 = " << ptr->value3 << std::endl;

    uintptr_t raw(Serializer::serialize(&data));
    Data *deserialized(Serializer::deserialize(raw));
    std::cout << std::endl;
	
	std::cout << "value 1 = " << deserialized->value1 << std::endl;
	std::cout << "value 2 = " << deserialized->value2 << std::endl;
	std::cout << "value 3 = " << deserialized->value3 << std::endl;
}
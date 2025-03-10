#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

#define SIZE 5
int main(int, char**)
{

    Array<int> number(SIZE);

    for (int i = 0; i < SIZE; i++){
        number[i] = i;
    }
    for (int i = 0; i < SIZE; i++){
        std::cout << number[i] << " ";
    }

    std::cout << std::endl;

    Array<int> seconde(number);
    seconde[0] = 44334;

    try{
        number[700] = 700;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "number[0] = " << number[0] << std::endl;
    std::cout << "seconde[0] = " << seconde[0] << std::endl;
    std::cout << "size = " << number.size() << std::endl; 
    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    // return 0;
}
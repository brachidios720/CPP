#pragma once 

#include <iostream>
#include <string>


template <typename T>

void    iter(T *array, int lenght, void (*f)(T &)){
    for(int i = 0; i < lenght ; i++){
        f(array[i]);
    }
}

template <typename T>
void    iter(T const *array, int lenght, void (*f)(T const &)){
    for(int i = 0; i < lenght ; i++){
        f(array[i]);
    }
}

template <typename T>

void     printint(T &w){
    std::cout << w << std::endl;
}

template <typename T>

void    printchar(const T &w){
    std::cout << w <<std::endl;
}
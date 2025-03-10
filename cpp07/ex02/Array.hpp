#pragma once 

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class Array{

    public :
            Array();
            Array(unsigned int n);
            Array(const Array &cpy);
            Array&operator=(const Array &other);
            ~Array();
            int size() const;
            T &operator[](unsigned int index);
            
    private :
            T *elements;
            unsigned int _size;

};



template <typename T>

Array<T>::Array(): elements(NULL), _size(0){

}

template<typename T>
Array<T>::Array(unsigned int n): elements(new T[n]), _size(n){

}

template<typename T>
Array<T>::Array(const Array &cpy): elements(new T[cpy._size]), _size(cpy._size){
    for(unsigned int i = 0; i < _size; i++)
        this->elements[i] = cpy.elements[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other){
    delete [] this->elements;
    this->elements = new T[other.elements];
    this->size = other.size;
    for(unsigned int i = 0; i < _size; i++)
        this->elements[i] = other.elements[i];
}

template<typename T>
int    Array<T>::size() const{
    return(this->_size);
}
template<typename T>
Array<T>::~Array(){
    delete[] this->elements;
}

template <typename T>
T &Array<T>::operator[](unsigned int index){
    if(index >= this->_size)
        throw(std::out_of_range("Index to high for the size"));
    return(this->elements[index]);
}

template <typename T>

void    iter(T *array, int lenght, void (*f)(T &)){
    for(int i = 0; i < lenght ; i++){
        f(array[i]);
    }
}

template <typename T>
void    iter(T *array, int lenght, void (*f)(const T &)){
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


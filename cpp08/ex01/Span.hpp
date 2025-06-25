#pragma once 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <stdexcept>
#include <limits>

class Span : public std::vector<int>{


    public:
            Span();
            Span(unsigned n);
            Span(const Span &cpy);
            Span&operator=(const Span &other);
            void addNumber(int nb);
            unsigned int shortestSpan();
            unsigned int longestSpan();
            template <typename T>
            void    addRange(T begin, T end);
            ~Span();


    private:

        unsigned _n;

};

template <typename T>

void Span::addRange(T begin, T end){
    if(distance(begin, end) + this->size() > _n)
        throw(std::length_error("Too much elements in the container "));
    this->insert(this->end(), begin, end);
}
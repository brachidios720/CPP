#include "Span.hpp"

Span::Span(): _n(0){

}
Span::Span(unsigned n): _n(n){
}
Span::Span(const Span &cpy): _n(cpy._n){

}

Span &Span::operator=(const Span &other){

    this->Span::vector::operator=(other);
    this->_n = other._n;
    return(*this); 
}

void Span::addNumber(int nb){
    if(this->size() >= _n)
        throw(std::length_error("the max size are already reached"));
    this->push_back(nb);
}

unsigned int Span::shortestSpan(){
    if(this->size() < 2)
        throw(std::length_error("less than 2 number can't find the shortest span"));
    
    std::vector<int> sortednumber = *this;
    std::sort(sortednumber.begin(), sortednumber.end());

    unsigned int mindist = std::numeric_limits<unsigned int>::max();
    for(unsigned i = 1; i < this->size(); i++){
        unsigned int diff = sortednumber[i] - sortednumber[i - 1];
        if(diff <= mindist)
            mindist = diff;
    }
    return(mindist);
}

unsigned int Span::longestSpan(){
    if(this->size() < 2)
        throw(std::length_error("less than 2 number can't find the higest span"));
    
        std::vector<int> allnumbers = *this;
    int max = *std::max_element(allnumbers.begin(), allnumbers.end());
    int min = *std::min_element(allnumbers.begin(), allnumbers.end());

    return(max - min);
}

Span::~Span(){

}
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const int nbr){
    std::cout << "Int constructor called" << std::endl;
    this->_value = nbr << _fractionalBits;
}

Fixed::Fixed(const float nbr){
    std::cout << "Float constructor called" << std::endl;
    this->_value = round(nbr *(1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called " << std::endl;
    if(this != &copy){
        this->_value = copy._value;
    }
    return(*this);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_value);
}

float Fixed::toFloat( void ) const{
    return(static_cast<float>(this->_value) / (1 << _fractionalBits));
}

int Fixed::toInt( void ) const{
    return(this->_value >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
    return( out << fixed.toFloat());
}

Fixed::~Fixed(){
    std::cout << "Destructor Called" << std::endl;
}
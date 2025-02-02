#include "Fixed.hpp"




Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called" << std::endl; 
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


Fixed::~Fixed(){
    std::cout << "Destructor Called" << std::endl;
}
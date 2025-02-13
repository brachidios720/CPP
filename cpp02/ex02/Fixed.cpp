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

//operator d'assigniation
bool Fixed::operator<(const Fixed &copy) const{
    return(this->_value < copy.getRawBits());
}
bool Fixed::operator>(const Fixed &copy) const{
    return(this->_value > copy.getRawBits());
}
bool Fixed::operator>=(const Fixed &copy) const{
    return(this->_value >= copy.getRawBits());
}
bool Fixed::operator<=(const Fixed &copy) const{
    return(this->_value <= copy.getRawBits());
}
bool Fixed::operator==(const Fixed &copy) const{
    return(this->_value == copy.getRawBits());
}
bool Fixed::operator!=(const Fixed &copy) const{
    return(this->_value != copy.getRawBits());
}


Fixed   Fixed::operator+(const Fixed &copy){
    return Fixed(this->toFloat() + copy.toFloat());
}
Fixed   Fixed::operator-(const Fixed &copy){
    return Fixed(this->toFloat() - copy.toFloat());
}
Fixed   Fixed::operator*(const Fixed &copy){
    return Fixed(this->toFloat() * copy.toFloat());
}
Fixed   Fixed::operator/(const Fixed &copy){
    if(this->toFloat() <= 0)
        return(0);
    return Fixed(this->toFloat() / copy.toFloat());
}

Fixed   &Fixed::operator++(){
    this->_value++; 
    return(*this);
}
Fixed   Fixed::operator++(int){
    Fixed tmp = *this;
    this->_value++;
    return(tmp);
}
Fixed   &Fixed::operator--(){
    this->_value--;
    return(*this);
}
Fixed   Fixed::operator--(int){
    Fixed tmp = *this;
    this->_value--;
    return(tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    return(a < b) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    return(a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
    return(a > b) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    return(a > b) ? a : b;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_value);
}

float Fixed::toFloat( void ) const{
    return(static_cast<float>(this->_value) / (1 << _fractionalBits));
}

int Fixed::toInt( void ) const{
    return(this->_value >> _fractionalBits);
}


Fixed& Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called " << std::endl;
    if(this != &copy){
        this->_value = copy._value;
    }
    return(*this);
}
Fixed::~Fixed(){
    std::cout << "Destructor Called" << std::endl;
}
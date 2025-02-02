#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{

        public:
                Fixed();
                Fixed(const float nbr);
                Fixed(const int nbr);
                Fixed(const Fixed &copy);
                Fixed &operator=(const Fixed &copy);
                ~Fixed();
                
                bool operator<(const Fixed &copy) const;
                bool operator>(const Fixed &copy) const;
                bool operator>=(const Fixed &copy) const;
                bool operator<=(const Fixed &copy) const;
                bool operator==(const Fixed &copy) const;
                bool operator!=(const Fixed &copy) const;
                
                Fixed   operator+(const Fixed &copy);
                Fixed   operator-(const Fixed &copy);
                Fixed   operator*(const Fixed &copy);
                Fixed   operator/(const Fixed &copy);

                Fixed   &operator++();
                Fixed   operator++(int);
                Fixed   &operator--();
                Fixed   operator--(int);

                static Fixed &min(Fixed &a, Fixed &b);
                static const Fixed &min(const Fixed &a, const Fixed &b);
                static Fixed &max(Fixed &a, Fixed &b);
                static const Fixed &max(const Fixed &a, const Fixed &b);

                void setRawBits( int const raw );
                int getRawBits( void ) const;
                float toFloat( void ) const;
                int toInt( void ) const;
                friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

        private:
                int _value;
                static const int _fractionalBits = 8;

};


#endif
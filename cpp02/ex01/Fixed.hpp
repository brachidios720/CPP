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
                void setRawBits( int const raw );
                int getRawBits( void ) const;
                float toFloat( void ) const;
                int toInt( void ) const;

        private:
                int _value;
                static const int _fractionalBits = 8;

};

#endif
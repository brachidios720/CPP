#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {

    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        ~Fixed();

        void setRawBits( int const raw );
        int getRawBits( void ) const;

    private:
        int _value;
        static const int _fractionalBits = 8;
};

#endif
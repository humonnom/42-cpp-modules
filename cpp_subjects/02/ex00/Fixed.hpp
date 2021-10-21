#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    int fixedPointValue;
    static int const NUM_OF_FRACTIONAL_BITS = 8;

   public:
    Fixed();
    Fixed(Fixed const &fiexd);
    ~Fixed();
    void setRawBits(int const raw);
    int getRawBits(void) const;
    Fixed &operator=(Fixed const &other);
};

#endif
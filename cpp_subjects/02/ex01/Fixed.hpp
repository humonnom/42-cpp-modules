#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
    int fixedPointValue;
    static int const NUM_OF_FRACTIONAL_BITS = 8;

   public:
    Fixed();
    Fixed(const int x);
    Fixed(const float x);
    Fixed(Fixed const &fiexd);
    ~Fixed();

    float toFloat(void) const;
    int toInt(void) const;
    void setRawBits(int const raw);
    int getRawBits(void) const;

    Fixed &operator=(Fixed const &other);
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif
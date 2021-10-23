#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
    int fixedPointValue;
    static int const NUM_OF_FRACTIONAL_BITS = 8;

   public:
    // Constructor & Destructor
    Fixed();
    Fixed(const int x);
    Fixed(const float x);
    Fixed(Fixed const &fiexd);
    ~Fixed();

    // Converter
    float toFloat(void) const;
    int toInt(void) const;

    // Printer
    void setRawBits(int const raw);
    int getRawBits(void) const;

    // Min & Max
    static Fixed &min(Fixed &fixed1, Fixed &fixed2);
    static Fixed const &min(Fixed const &fixed1, Fixed const &fixed2);
    static Fixed &max(Fixed &fixed1, Fixed &fixed2);
    static Fixed const &max(Fixed const &fixed1, Fixed const &fixed2);

    // Operator Overloads
    //  대입연산자
    Fixed &operator=(Fixed const &other);
    //  전위연산자, 후위연산자
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    //  비교연산자
    bool operator==(Fixed &other) const;
    bool operator!=(Fixed &other) const;
    bool operator<(Fixed &other) const;
    bool operator>(Fixed &other) const;
    bool operator<=(Fixed &other) const;
    bool operator>=(Fixed &other) const;
    //  사칙연산
    Fixed operator+(Fixed const &arg) const;
    Fixed operator-(Fixed const &arg) const;
    Fixed operator*(Fixed const &arg) const;
    Fixed operator/(Fixed const &arg) const;
};
//  출력스트림
std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif
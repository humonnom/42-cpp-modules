#include "Fixed.hpp"
#define SHIFTED_VALUE (1 << 8)

Fixed::Fixed() : fixedPointValue(0) { std::cout << "Default constructor called" << std::endl; };
Fixed::Fixed(const int x) {
    std::cout << "Int constructor called" << std::endl;
    fixedPointValue = (x << NUM_OF_FRACTIONAL_BITS);
};
Fixed::Fixed(const float x) {
    std::cout << "Float constructor called" << std::endl;
    fixedPointValue = std::roundf(x * SHIFTED_VALUE);
};

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; };

Fixed::Fixed(Fixed const &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

float Fixed::toFloat() const {
    return (float)fixedPointValue / SHIFTED_VALUE;
}

int Fixed::toInt() const {
    return fixedPointValue >> NUM_OF_FRACTIONAL_BITS;
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    fixedPointValue = raw;
};

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
};
Fixed &Fixed::operator=(Fixed const &other) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other) this->fixedPointValue = other.getRawBits();
    return (*this);
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed) {
    ostream << fixed.toFloat();
    return ostream;
}
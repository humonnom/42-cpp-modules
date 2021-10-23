#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) { std::cout << "Default constructor called" << std::endl; };

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; };

Fixed::Fixed(Fixed const &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

Fixed &Fixed::operator=(Fixed const &other) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other) this->fixedPointValue = other.getRawBits();
    return (*this);
};

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixedPointValue = raw;
};

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
};

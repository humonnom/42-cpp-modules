#include "Fixed.hpp"
#define SHIFTED_VALUE (1 << 8)

// Constructor & Destructor

Fixed::Fixed() : fixedPointValue(0){
                     // std::cout << "Default constructor called" << std::endl;
                 };
Fixed::Fixed(const int x) {
    // std::cout << "Int constructor called" << std::endl;
    fixedPointValue = (x << NUM_OF_FRACTIONAL_BITS);
};
Fixed::Fixed(const float x) {
    // std::cout << "Float constructor called" << std::endl;
    fixedPointValue = std::roundf(x * SHIFTED_VALUE);
};

Fixed::Fixed(Fixed const &other) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
};

// Converter

float Fixed::toFloat() const {
    return (float)fixedPointValue / SHIFTED_VALUE;
}

int Fixed::toInt() const {
    return fixedPointValue >> NUM_OF_FRACTIONAL_BITS;
}

// Printer

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    fixedPointValue = raw;
};

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
};

// Min & Max

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1.fixedPointValue > fixed2.fixedPointValue)
        return fixed2;
    else
        return fixed1;
};

Fixed const &Fixed::min(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1.fixedPointValue > fixed2.fixedPointValue)
        return fixed2;
    else
        return fixed1;
};
Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1.fixedPointValue > fixed2.fixedPointValue)
        return fixed1;
    else
        return fixed2;
};

Fixed const &Fixed::max(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1.fixedPointValue > fixed2.fixedPointValue)
        return fixed1;
    else
        return fixed2;
};

//Operator Overloads
//  대입연산자
Fixed &Fixed::operator=(Fixed const &other) {
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &other) this->fixedPointValue = other.getRawBits();
    return (*this);
};

//  전위연산자, 후위연산자
Fixed &Fixed::operator++() {
    ++fixedPointValue;
    return (*this);
}
Fixed &Fixed::operator--() {
    --fixedPointValue;
    return (*this);
}
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++fixedPointValue;
    return tmp;
}
Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --fixedPointValue;
    return tmp;
}
// 비교연산자

bool Fixed::operator==(Fixed &other) const {
    return (getRawBits() == other.getRawBits());
}
bool Fixed::operator!=(Fixed &other) const {
    return (getRawBits() != other.getRawBits());
}
bool Fixed::operator<(Fixed &other) const {
    return (getRawBits() < other.getRawBits());
}
bool Fixed::operator>(Fixed &other) const {
    return (getRawBits() > other.getRawBits());
}
bool Fixed::operator<=(Fixed &other) const {
    return (getRawBits() <= other.getRawBits());
}
bool Fixed::operator>=(Fixed &other) const {
    return (getRawBits() >= other.getRawBits());
}
//  사칙연산

Fixed Fixed::operator+(Fixed const &arg) const {
    return (Fixed(this->toFloat() + arg.toFloat()));
}
Fixed Fixed::operator-(Fixed const &arg) const {
    return (Fixed(this->toFloat() - arg.toFloat()));
}
Fixed Fixed::operator*(Fixed const &arg) const {
    return (Fixed(this->toFloat() * arg.toFloat()));
}
Fixed Fixed::operator/(Fixed const &arg) const {
    if (arg.toInt() > 0)
        return (Fixed(this->toFloat() / arg.toFloat()));
    else
        throw std::runtime_error("0으로 나눌 수 없습니다.");
}

//  출력스트림
std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed) {
    ostream << fixed.toFloat();
    return ostream;
}
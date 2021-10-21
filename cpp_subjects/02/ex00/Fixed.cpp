#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) { std::cout << "생성자" << std::endl; };

Fixed::~Fixed() { std::cout << "소멸자" << std::endl; };

Fixed::Fixed(Fixed const &other) {
    std::cout << "복사 생성자" << std::endl;
    *this = other;
};

Fixed &Fixed::operator=(Fixed const &other) {
    std::cout << "대입 연산자 오버로딩" << std::endl;
    if (this != &other) this->fixedPointValue = other.getRawBits();
    return (*this);
};

void Fixed::setRawBits(int const raw) { fixedPointValue = raw; };

int Fixed::getRawBits(void) const { return fixedPointValue; };

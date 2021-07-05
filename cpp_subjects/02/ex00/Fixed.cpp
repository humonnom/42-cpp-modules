#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "생성자 실행" << std::endl;
	a = 3;
	name = new std::string ("jueun");
};

Fixed::Fixed(Fixed const& fiexd){
	std::cout << "복사 생성자 실행" << std::endl;
};

Fixed::~Fixed(){
	std::cout << "소멸자 실행" << std::endl;
	delete name;
};

void Fixed::set(){
	a = 4;
	*name = "turtle";
};

void Fixed::print(){
	std::cout << a << *name << std::endl;
};

Fixed& Fixed::operator=(Fixed const& fixed){
	std::cout << "대입 연산자 실행" << std::endl;
	(*this) = fixed;
	return (*this);
};

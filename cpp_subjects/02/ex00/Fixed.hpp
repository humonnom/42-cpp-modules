#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{

	public:
	Fixed();
	Fixed(Fixed const& fiexd);
	~Fixed();
	Fixed& operator=(Fixed const& fixed);
};

#endif
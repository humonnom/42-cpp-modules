#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human{
	const Brain brain;

	public:
	std::string identify() const;
	const Brain& getBrain() const;
};

#endif
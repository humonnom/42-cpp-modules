#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string _name;

	public:
	Zombie();
	Zombie(std::string const& name);
	~Zombie();
	void setName(std::string const& name);
	void announce();
	Zombie* zombieHorde(int N, std::string name);
};

#endif
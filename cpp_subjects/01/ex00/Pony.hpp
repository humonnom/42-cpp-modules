#ifndef PONY_HPP
#define PONY_HPP

# include <iostream>

class Pony{
	std::string _name;

	public:
	Pony(std::string name = "Pony") : _name(name){
		std::cout << "▻ Ƿ ◌ Ň y\n" << _name << " is created" << std::endl;
	};
	~Pony();
	void sniff();
	void takeANap();
	void run();
};

void ponyOnTheHeap();
void ponyOnTheStack();

#endif
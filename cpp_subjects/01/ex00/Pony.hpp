#ifndef PONY_HPP
#define PONY_HPP

# include <iostream>

class Pony{
	std::string name;

	public:
	Pony();
	Pony(std::string name_input);
	~Pony();
	void sniff();
	void takeANap();
	void run();
};

void ponyOnTheHeap();
void ponyOnTheStack();

#endif
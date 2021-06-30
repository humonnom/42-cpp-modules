#include "Pony.hpp"

void ponyOnTheHeap(){
	Pony *pony = new Pony("Rainbow Dash");
	pony->sniff();
	pony->run();
	pony->takeANap();
	delete pony;
};

void ponyOnTheStack(){
	Pony pony("Tea Love");
	pony.sniff();
	pony.run();
	pony.takeANap();
};

int
	main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
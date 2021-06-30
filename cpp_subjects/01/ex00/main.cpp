#include "Pony.hpp"

void ponyOnTheHeap(){
	Pony *pony = new Pony("Rainbow Dash[heap]");
	pony->sniff();
	pony->run();
	pony->takeANap();
	delete pony;
};

void ponyOnTheStack(){
	Pony pony("Tea Love[stack]");
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
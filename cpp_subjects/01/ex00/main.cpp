#include "Zombie.hpp"

int main()
{
	std::string name_pool[Z_MAX] = {
		"Jean-Luc Picard",
		"William T. Riker",
		"Data",
		"Geordi La Forge",
		"Beverly Crusher",
		"Deanna Troi",
		"Worf",
		"Q",
		"Miles O'brien",
		"Wesley Crusher",
		"Tasha Yar",
		"Worf",
		"Katherine Pulaski",
		"Guinan",
		"Lwaxana Troi",
		"Ro Laren"
	};

	Zombie tasha_yar("tasha_yar");
	tasha_yar.announce();

	std::cout << "tasha_yar attacked worf" << std::endl;

	Zombie* worf;
	worf = tasha_yar.newZombie("worf");
	worf->announce();
	delete worf;

	std::cout << "tasha_yar attacked random person" << std::endl;
	tasha_yar.randomChump("unknown cadet");
}
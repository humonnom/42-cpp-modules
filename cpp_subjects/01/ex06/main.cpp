#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
{
		Weapon club = Weapon("Crude Spiked Club");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Some other type of Club");
		bob.attack();
	}
	{
		Weapon club = Weapon("Crude Spiked Club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Some other type of Club");
		jim.attack();
	}




	// Weapon const& club1(Weapon("crude spiked club"));
	// HumanA("Geordi La Forge", club1).attack();


	// Weapon club2("someother type of club");


}









// "Geordi La Forge",
// 	"Beverly Crusher",
// 	"Deanna Troi",
// 	"Worf",
// 	"Q",
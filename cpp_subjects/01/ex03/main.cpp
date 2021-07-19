#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Phaser");
		
		HumanA janeway("Janeway", club);
		janeway.attack();
		club.setType("Laser");
		janeway.attack();
	}
	{
		Weapon club = Weapon("Bat'leth");

		HumanB warp("Warp");
		warp.setWeapon(club);
		warp.attack();
		club.setType("Mevak");
		warp.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		
		HumanA bob("bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		
		HumanA beverly("Beverly Crusher", club);
		beverly.attack();
		club.setType("some other type of club");
		beverly.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB deanna("Deanna Troi");
		deanna.attack();
		deanna.setWeapon(club);
		deanna.attack();
		club.setType("some other type of club");
		deanna.attack();
	}
}









// "Geordi La Forge",

// 	"Worf",
// 	"Q",
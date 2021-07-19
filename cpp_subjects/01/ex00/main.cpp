#include "Zombie.hpp"
#include "ZombieEvent.hpp"

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
	Zombie*	heaps[Z_MAX];

	//alloc and free [heap]
	ZombieEvent heap("heap");
	for (int i = 0; i < Z_MAX; i++){
		std::string name;
		std::random_device r_device;
  		std::mt19937 r_engine(r_device());
		std::uniform_int_distribution<int> dis(0, Z_MAX - 1);
		name = name_pool[dis(r_engine)];
		heaps[i] = heap.newZombie(name);
	}

	//create at stack
	ZombieEvent stack("stack");
	for (int i = 0; i < Z_MAX; i++){
		std::string name;
		std::random_device r_device;
  		std::mt19937 r_engine(r_device());
		std::uniform_int_distribution<int> dis(0, Z_MAX - 1);
		name = name_pool[dis(r_engine)];
		stack.randomChump(name);
	}
	//delete
	for (int i = 0; i < Z_MAX; i++){
		delete heaps[i];
	}
}
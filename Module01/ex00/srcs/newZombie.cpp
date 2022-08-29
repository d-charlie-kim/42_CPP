#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie* zombie;

	zombie = new (std::nothrow) Zombie(name);
	if (!zombie) {
		std::cout << "Error : Can't allocate memory\n";
		exit (1);
	}
	return zombie;
}

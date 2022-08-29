#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << _name << ": Constructed\n";
}

Zombie::~Zombie() {
	std::cout << _name << ": Destructed\n";
}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

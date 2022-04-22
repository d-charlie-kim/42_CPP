#include "../includes/Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << _name << ": Constructed\n";
};

Zombie::~Zombie() {
	std::cout << _name << ": Destructed\n";
};

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
};

void Zombie::setName(std::string name) {
	_name = name;
};
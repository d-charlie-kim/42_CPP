#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Passed Default Constructor\n";
}

Weapon::Weapon(std::string type) {
	_type = type;
	std::cout << _type << ": Constructed\n";
}

Weapon::~Weapon() {
	std::cout << _type << ": Destructed\n";
}

const std::string& Weapon::getType() {
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}

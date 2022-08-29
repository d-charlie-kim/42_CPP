#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _name(name) {
	std::cout << _name << ": Constructed\n";
}

HumanB::~HumanB() {
	std::cout << _name << ": Destructed\n";
}

void HumanB::attack() {
	std::cout << _name << " attacks with their ";
	if (_Weapon->getType() == "")
		std::cout << "fist\n";
	else
		std::cout << _Weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon& arm) {
	_Weapon = &arm;
}

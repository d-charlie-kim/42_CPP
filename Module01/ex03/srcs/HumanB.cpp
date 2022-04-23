#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _Weapon(), _name(name) {
	std::cout << _name << ": Constructed\n";
}

HumanB::~HumanB() {
	std::cout << _name << ": Destructed\n";
}

void HumanB::attack() {
	std::cout << _name << " attacks with their ";
	if (_Weapon)
		std::cout << _Weapon->getType() << "\n";
	else
		std::cout << "fists\n";
}

void HumanB::setWeapon(Weapon& arm) {
	_Weapon = &arm;
}

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _name(name), _Weapon(0) {
	std::cout << _name << ": Constructed\n";
}

HumanB::~HumanB() {
	std::cout << _name << ": Destructed\n";
}

void HumanB::attack() {
	std::cout << _name << " attacks with their ";
	std::cout << _Weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon& arm) {
	_Weapon = &arm;
}

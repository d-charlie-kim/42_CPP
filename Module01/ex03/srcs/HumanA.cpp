#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << _name << " attacks with their ";
	std::cout << _Weapon.getType() << "\n"; 
}

HumanA::HumanA(std::string name, Weapon& arm)
: _name(name), _Weapon(arm) {
	std::cout << _name << ": Constructed\n";
}

HumanA::~HumanA() {
	std::cout <<  _name << ": Destructed\n";
}

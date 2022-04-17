#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << _name << " attacks with their ";
	std::cout << _Weapon << "\n"; 
};

HumanA::HumanA() {
	std::cout << "Passed Default Constructor\n";
};

HumanA::HumanA(std::string name, Weapon arm) {
	_name = name;
	_Weapon = arm.getType();
};

HumanA::~HumanA() {
	std::cout << "\n" << _name << ": Destructed\n";
};

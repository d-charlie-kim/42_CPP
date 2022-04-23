#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
:_name(), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) 
:_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << _name << ": Constructed\n";
}

ClapTrap::~ClapTrap() {
	std::cout << _name << "Destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& origin) {

}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {

}

void ClapTrap::attack(const std::string& target) {

}

void ClapTrap::takeDamage(unsigned int amount) {

}

void ClapTrap::rePaired(unsigned int amount) {

}
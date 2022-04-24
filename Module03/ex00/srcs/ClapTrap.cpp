#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
:_name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
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
	std::cout << "Copy constructor called\n";
	*this = origin;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called\n";
	_name = other._name;
}

void ClapTrap::attack(const std::string& target) {

}

void ClapTrap::takeDamage(unsigned int amount) {

}

void ClapTrap::rePaired(unsigned int amount) {

}
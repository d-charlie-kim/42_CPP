#include "FragTrap.hpp"

FragTrap::FragTrap() 
: ClapTrap(), _status(false) {
	std::cout << "FragTrap: Default constructor called\n";
	_attackDamage = 30;
	_energyPoints = 100;
	_hitPoints = 100;
}

FragTrap::FragTrap(std::string name) 
: ClapTrap(name), _status(false) {
	std::cout << "FragTrap: " << _name << ": Constructed\n";
	_attackDamage = 30;
	_energyPoints = 100;
	_hitPoints = 100;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: " << _name << ": Destructor called\n";
}

FragTrap::FragTrap(const FragTrap& origin)
: ClapTrap(origin) {
	std::cout << "FragTrap: Copy constructor called\n";
	*this = origin;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap: Copy assignment operator called\n";
	_name = other._name;
	_status = other._status;
	_attackDamage = other._attackDamage;
	_energyPoints = other._energyPoints;
	_hitPoints = other._hitPoints;
	return *this;
}

void FragTrap::attack(const std::string& target) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! FragTrap: " << _name << " is already DEAD\n";
	else if (_energyPoints > 0) {
		std::cout << "FragTrap " << _name << " attacks ";
		std::cout << target << ", causing ";
		std::cout << "[ " << _attackDamage << " ] points of damage!\n";
		_energyPoints--;
	}
	else {
		std::cout << "[ FAIL! FragTrap: " << _name << " need Engery ]\n";
	}
}

void FragTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! FragTrap: " << _name << " is already DEAD ]\n";
	else {
		std::cout << "FragTrap " << _name << " is attacked, ";
		std::cout << "taked [ " << amount << " ]" << " points of damage!\n";
		if (_hitPoints <= amount) {
			_hitPoints = 0;
			std::cout << "FragTrap " << _name << " is DEAD.\n";
		}
		else
			_hitPoints -= amount;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! FragTrap: " << _name << " is already DEAD ]\n";
	else if (_energyPoints > 0) {
		std::cout << "FragTrap " << _name << " repaired ";
		std::cout << "[ " << amount << " ]";
		std::cout << " itself\n";
		_energyPoints--;
		_hitPoints += amount;
	}
	else {
		std::cout << "[ FAIL! FragTrap: " << _name << " need Engery ]\n";
	}
}

void FragTrap::highFivesGuys() {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! FragTrap: " << _name << " is already DEAD\n";
	else {
		std::cout << "FragTrap " << _name << ": HighFives! \n";
	}
}
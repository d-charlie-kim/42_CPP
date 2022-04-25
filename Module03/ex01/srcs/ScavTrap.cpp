#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
: ClapTrap(), _status(false) {
	std::cout << "ScavTrap: Default constructor called\n";
	_attackDamage = 20;
	_energyPoints = 50;
	_hitPoints = 100;
}

ScavTrap::ScavTrap(std::string name) 
: ClapTrap(name), _status(false) {
	std::cout << "ScavTrap: " << _name << ": Constructed\n";
	_attackDamage = 20;
	_energyPoints = 50;
	_hitPoints = 100;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: " << _name << ": Destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& origin)
: ClapTrap(origin) {
	std::cout << "ScavTrap: Copy constructor called\n";
	*this = origin;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap: Copy assignment operator called\n";
	_name = other._name;
	_status = other._status;
	_attackDamage = other._attackDamage;
	_energyPoints = other._energyPoints;
	_hitPoints = other._hitPoints;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! ScavTrap: " << _name << " is already DEAD\n";
	else if (_energyPoints > 0) {
		std::cout << "ScavTrap " << _name << " attacks ";
		std::cout << target << ", causing ";
		std::cout << "[ " << _attackDamage << " ] points of damage!\n";
		_energyPoints--;
	}
	else {
		std::cout << "[ FAIL! ScavTrap: " << _name << " need Engery ]\n";
	}
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! ScavTrap: " << _name << " is already DEAD ]\n";
	else {
		std::cout << "ScavTrap " << _name << " is attacked, ";
		std::cout << "taked [ " << amount << " ]" << " points of damage!\n";
		if (_hitPoints <= amount) {
			_hitPoints = 0;
			std::cout << "ScavTrap " << _name << " is DEAD.\n";
		}
		else
			_hitPoints -= amount;
	}
}

void ScavTrap::rePaired(unsigned int amount) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! ScavTrap: " << _name << " is already DEAD ]\n";
	else if (_energyPoints > 0) {
		std::cout << "ScavTrap " << _name << " repaired ";
		std::cout << "[ " << amount << " ]";
		std::cout << " itself\n";
		_energyPoints--;
		_hitPoints += amount;
	}
	else {
		std::cout << "[ FAIL! ScavTrap: " << _name << " need Engery ]\n";
	}
}

void ScavTrap::guardGate() {
	if (_hitPoints == 0)
		std::cout << "[ FAIL! ScavTrap: " << _name << " is already DEAD ]\n";
	else if (_status)
		std::cout << "ScavTrap " << _name << " is already in Gate keeper mode.\n";
	else {
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode.\n";
		_status = true;
	}
}

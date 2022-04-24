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
	std::cout << _name << ": Destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& origin) {
	std::cout << "Copy constructor called\n";
	*this = origin;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called\n";
	_name = other._name;
	return *this;
}

std::string ClapTrap::getName() const{
	return _name;
}

unsigned int ClapTrap::getAttackDamage() const{
	return _attackDamage;
}

unsigned int ClapTrap::getHealth() const {
	return _hitPoints;
}
unsigned int ClapTrap::getEnergy() const {
	return _energyPoints;
}

void ClapTrap::setName(std::string& name) {
	_name = name;
}

void ClapTrap::setAttackDamage(unsigned int num) {
	_attackDamage = num;
}

void ClapTrap::setHealth(unsigned int num) {
	_hitPoints = num;
}

void ClapTrap::setEnergy(unsigned int num) {
	_energyPoints = num;
}

void ClapTrap::attack(const std::string& target) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL : " << _name << " is already DEAD\n";
	else if (_energyPoints > 0) {
		std::cout << "ClapTrap " << _name << " attacks ";
		std::cout << target << ", causing ";
		std::cout << "[ " << _attackDamage << " ] points of damage!\n";
		_energyPoints--;
	}
	else {
		std::cout << "[ FAIL : " << _name << " need Engery ]\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL : " << _name << " is already DEAD ]\n";
	else {
		std::cout << "ClapTrap " << _name << " is attacked, ";
		std::cout << "taked [ " << amount << " ]" << " points of damage!\n";
		if (_hitPoints <= amount) {
			_hitPoints = 0;
			std::cout << "ClapTrap " << _name << " is DEAD.\n";
		}
		else
			_hitPoints -= amount;
	}
}

void ClapTrap::rePaired(unsigned int amount) {
	if (_hitPoints == 0)
		std::cout << "[ FAIL : " << _name << " is already DEAD ]\n";
	else if (_energyPoints > 0) {
		std::cout << "ClapTrap " << _name << " repaired ";
		std::cout << "[ " << amount << " ]";
		std::cout << " itself\n";
		_energyPoints--;
		_hitPoints += amount;
	}
	else {
		std::cout << "[ FAIL : " << _name << " need Engery ]\n";
	}
}
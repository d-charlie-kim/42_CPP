#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
	 bool _status;

	public:
	 ScavTrap();
	 ScavTrap(std::string name);
	 ~ScavTrap();
	 ScavTrap(const ScavTrap& origin);
	 ScavTrap& operator=(const ScavTrap& other);

	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void rePaired(unsigned int amount);
	 void guardGate();
};

#endif
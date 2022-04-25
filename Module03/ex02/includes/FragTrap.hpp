#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
	 bool _status;

	public:
	 FragTrap();
	 FragTrap(std::string name);
	 ~FragTrap();
	 FragTrap(const FragTrap& origin);
	 FragTrap& operator=(const FragTrap& other);

	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void rePaired(unsigned int amount);
	 void highFivesGuys();
};

#endif
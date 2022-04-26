#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
	 std::string _name;
	 unsigned int _hitPoints;
	 unsigned int _energyPoints;
	 unsigned int _attackDamage;
	
	public:
	 ClapTrap();
	 ClapTrap(std::string name);
	 ClapTrap(const ClapTrap& origin);
	 ~ClapTrap();
	 ClapTrap& operator=(const ClapTrap& other);

	 std::string getName() const;
	 unsigned int getAttackDamage() const;
	 unsigned int getHealth() const;
	 unsigned int getEnergy() const;

	 void setAttackDamage(unsigned int num);
	 void setHealth(unsigned int num);
	 void setEnergy(unsigned int num);
	 void setName(std::string& name);

	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void beRepaired(unsigned int amount);
};

#endif
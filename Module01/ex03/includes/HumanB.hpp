#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon& arm);

private:
	Weapon* _Weapon;
	std::string _name;
};

#endif

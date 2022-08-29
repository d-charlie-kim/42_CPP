#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon& arm);
	~HumanA();

	void attack();

private:
	std::string _name;
	Weapon& _Weapon;
};

#endif

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
	 HumanB();
	 ~HumanB();

	 void attack();
	 void setWeapon(Weapon arm);

	private:
	 std::string Weapon;
	 std::string name;
};

#endif
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

	ScavTrap aa("HELLO");
	FragTrap ee("NAME");
	FragTrap ff = ee;

	aa.attack(ee.getName());
	ee.takeDamage(aa.getAttackDamage());
	ee.attack(ff.getName());
	ff.takeDamage(ee.getAttackDamage());
	ee.beRepaired(3);
	
	std::cout << "\n";
	std::cout << aa.getName() << ": energy: "<< aa.getEnergy() << ", health: " << aa.getHealth() << std::endl;
	std::cout << "\n";
	std::cout << ee.getName() << ": energy: "<< ee.getEnergy() << ", health: " << ee.getHealth() << std::endl;
	std::cout << "\n";
	std::cout << ff.getName() << ": energy: "<< ff.getEnergy() << ", health: " << ff.getHealth() << std::endl;

	std::cout << "\n";
	aa.guardGate();
	aa.guardGate();
	ff.highFivesGuys();
	ff.highFivesGuys();
	std::cout << "\n";

	return (0);
}
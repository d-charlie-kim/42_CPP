#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

	ScavTrap aa("HELLO");
	ScavTrap bb("WORLD");
	ScavTrap cc = bb;
	ScavTrap tt(bb);
	ScavTrap test;
	std::cout << "\n";
	test = bb;

	std::cout << "\n";
	cc.attack(aa.getName());
	aa.takeDamage(cc.getAttackDamage());
	cc.attack(bb.getName());
	bb.takeDamage(cc.getAttackDamage());
	bb.beRepaired(10);

	std::cout << "\n";
	std::cout << aa.getName() << ": energy: "<< aa.getEnergy() << ", health: " << aa.getHealth() << std::endl;
	std::cout << "\n";
	std::cout << bb.getName() << ": energy: "<< bb.getEnergy() << ", health: " << bb.getHealth() << std::endl;
	std::cout << "\n";
	std::cout << cc.getName() << ": energy: "<< cc.getEnergy() << ", health: " << cc.getHealth() << std::endl;
	std::cout << "\n";

	cc.guardGate();
	cc.guardGate();
	std::cout << "\n";

	return (0);
}
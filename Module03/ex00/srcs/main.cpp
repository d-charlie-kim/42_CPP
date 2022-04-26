#include "ClapTrap.hpp"

int main(void) {
	ClapTrap robot1("ROBOT");
	ClapTrap robot2("AI");

	robot1.setAttackDamage(15);
	robot2.setHealth(25);
	robot1.setEnergy(2);

	std::cout << robot1.getName() << ": energy: "<< robot1.getEnergy() << ", health: " << robot1.getHealth() << std::endl;
	std::cout << robot2.getName() << ": energy: "<< robot2.getEnergy() << ", health: " << robot2.getHealth() << std::endl;
	std::cout << "\n";

	robot1.attack(robot2.getName());
	robot2.takeDamage(robot1.getAttackDamage());
	std::cout << robot1.getName() << ": energy: "<< robot1.getEnergy() << ", health: " << robot1.getHealth() << std::endl;
	std::cout << robot2.getName() << ": energy: "<< robot2.getEnergy() << ", health: " << robot2.getHealth() << std::endl;
	std::cout << "\n";

	robot1.attack(robot2.getName());
	robot2.beRepaired(10);
	robot2.takeDamage(robot1.getAttackDamage());
	std::cout << robot1.getName() << ": energy: "<< robot1.getEnergy() << ", health: " << robot1.getHealth() << std::endl;
	std::cout << robot2.getName() << ": energy: "<< robot2.getEnergy() << ", health: " << robot2.getHealth() << std::endl;
	std::cout << "\n";

	robot1.attack(robot2.getName());
	robot2.beRepaired(10);
	std::cout << robot1.getName() << ": energy: "<< robot1.getEnergy() << ", health: " << robot1.getHealth() << std::endl;
	std::cout << robot2.getName() << ": energy: "<< robot2.getEnergy() << ", health: " << robot2.getHealth() << std::endl;
	std::cout << "\n";

	return (0);
}
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ScavTrap she("SHE");
	ScavTrap he(she);

	FragTrap temp("HELLO");
	temp.highFivesGuys();

	// boy.attack("GIRL");
	// girl.takeDamage(boy.getAttackDamage());
	// std::cout << boy.getName() << ": energy: "<< boy.getEnergy() << ", health: " << boy.getHealth() << std::endl;
	// std::cout << girl.getName() << ": energy: "<< girl.getEnergy() << ", health: " << girl.getHealth() << std::endl;
	// std::cout << "\n";
	// are.attack("GIRL");
	// you.takeDamage(are.getAttackDamage());
	// std::cout << are.getName() << ": energy: "<< are.getEnergy() << ", health: " << are.getHealth() << std::endl;
	// std::cout << you.getName() << ": energy: "<< you.getEnergy() << ", health: " << you.getHealth() << std::endl;
	// std::cout << "\n";

	// std::cout << who.getName();
	// std::cout << "\n";

	return (0);
}

/*
	1. 상속에 대한 이해
	2. 상속을 받아서 출력하는 부분 / 복사생성자 호출 시에 언급할 수 있는 
		"부모에는 자식을 담을 수 있지만, 자식에는 부모를 담지 못한다." 는 개념
	3. 다이아몬드 트랩에 대한 이해 살짝, 하지만 구현하지는 않음
*/
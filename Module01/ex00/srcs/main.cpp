#include "Zombie.hpp"

int main(void) {
	std::cout << "\n [Stack]\n";
	Zombie zombie1("FirstZombie");
	Zombie zombie2("SecondZombie");
	Zombie zombie3("ThirdZombie");

	zombie1.announce();
	zombie2.announce();
	zombie3.announce();

	std::cout << "\n [Heap]\n";
	Zombie *zomptr1;
	Zombie *zomptr2;

	zomptr1 = newZombie("FirstPointer");
	zomptr2 = newZombie("SecondPointer");

	zomptr1->announce();
	zomptr2->announce();

	std::cout << "\n [RandomChump]\n";
	randomChump("hello");
	std::cout << "\n";
	randomChump("world");
	std::cout << "\n";

	delete zomptr1;
	delete zomptr2;
	return (0);
}

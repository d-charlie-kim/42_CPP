#include "Zombie.hpp"

int main(void) {
	Zombie *zomptr;
	Zombie *zomptr2;

	zomptr = zombieHorde(3, "zombie world");
	zomptr2 = zombieHorde(3, "zombie world");

	for (int i = 0; i < 5; i++) {
		zomptr[i].announce();
	}

	for (int i = 0; i < 3; i++) {
		zomptr2[i].announce();
	}

	delete[] zomptr;
	delete[] zomptr2;
	return (0);
};
#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombie = new (std::nothrow) Zombie[N];
	if (!zombie)
	{
		std::cout << "Error : Can't allocate memory\n";
		exit (1);
	}

	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}
	return zombie;
};
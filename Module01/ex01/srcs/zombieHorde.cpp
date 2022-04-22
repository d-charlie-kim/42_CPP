#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombie = new (std::nothrow) Zombie[N];

	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}
	return zombie;
};
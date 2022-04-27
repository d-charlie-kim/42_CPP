#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"

int main() {

	std::cout << "\n ----// Make Sound Ideas TEST //---- \n\n";
	
	Animal *zoo[10];
	
	for (int i = 0; i < 5; i++)
		zoo[i] = new Dog();
	for (int i = 5; i < 10; i++)
		zoo[i] = new Cat();
	for (int i = 0; i < 10; i++)
		zoo[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete zoo[i];

	std::cout << "\n ----// Deep Copy TEST //---- \n\n";

	Dog dog1;
	Dog dog2;
	dog2 = dog1;
	for (int i = 0; i < 10; i++)
		dog1.sayIdea(i);
	std::cout << "-- -- -- --\n";
	for (int i = 0; i < 10; i++)
		dog2.putInBrain("NEW", i);
	for (int i = 0; i < 10; i++)
		dog1.sayIdea(i);
	std::cout << "-- -- -- --\n";
	for (int i = 0; i < 10; i++)
		dog2.sayIdea(i);

	// std::cout << "\n ----// Swallow Copy TEST //---- \n\n";

	// WrongDog wdog1;
	// WrongDog wdog2;
	// wdog2 = wdog1;
	// for (int i = 0; i < 10; i++)
	// 	wdog1.sayIdea(i);
	// std::cout << "-- -- -- --\n";
	// for (int i = 0; i < 10; i++)
	// 	wdog2.putInBrain("NEW", i);
	// for (int i = 0; i < 10; i++)
	// 	wdog1.sayIdea(i);
	// std::cout << "-- -- -- --\n";
	// for (int i = 0; i < 10; i++)
	// 	wdog2.sayIdea(i);

	system("leaks zoo");

	//Animal animal;
}

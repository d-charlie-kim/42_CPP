#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << "type:  " << j->getType() << " " << std::endl;
	std::cout << "type:  " << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound(); //will output the cat sound! j->makeSound();

	meta->makeSound();

	std::cout << std::endl << "-----------" << std::endl;

	// const WrongAnimal* wAnimal = new WrongAnimal();
	// const WrongAnimal* wCat = new WrongCat();

	// std::cout << std::endl;
	// std::cout << wAnimal->getType() << "  !" << std::endl;
	// std::cout << wCat->getType() << "  !" << std::endl;
	// wAnimal->makeSound();
	// wCat->makeSound();

	// std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	// delete wCat;
	// delete wAnimal;

	return 0;
}

/*

1. 가상함수에 대한 이해 (virtual function)
2. 붙여주는 것과 안 붙여주는 것의 차이 (cat / wrongcat)
3. 사용하는 이유

*/
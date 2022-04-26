#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called\n";
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog& origin) : Animal(origin) {
	std::cout << "Dog copy constructor called\n";
	*this = origin;
}

Dog& Dog::operator=(const Dog& other){
	std::cout << "Dog copy assignment operator called\n";
	type = other.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "[ Woof! Woof!! ~Woof!!! ]\n";
}
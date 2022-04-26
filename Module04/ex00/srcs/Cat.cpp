#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat default constructor called\n";
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat& origin) : Animal(origin) {
	std::cout << "Cat copy constructor called\n";
	*this = origin;
}

Cat& Cat::operator=(const Cat& other){
	std::cout << "Cat copy assignment operator called\n";
	type = other.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "[ ... ]\n";
}
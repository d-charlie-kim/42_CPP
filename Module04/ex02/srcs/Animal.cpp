#include "Animal.hpp"

Animal::Animal(): type() {
	std::cout << "Animal default constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal& origin) {
	std::cout << "Animal copy constructor called\n";
	*this = origin;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal copy assignment operator called\n";
	type = other.type;
	return *this;
}

const std::string& Animal::getType() const{
	return type;
}

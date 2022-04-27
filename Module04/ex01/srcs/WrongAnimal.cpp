#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type() {
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = origin;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy assignment operator called\n";
	type = other.type;
	return *this;
}

const std::string& WrongAnimal::getType() const{
	return type;
}

void WrongAnimal::makeSound() const{
	std::cout << "@#$%@#$%...\n";
}
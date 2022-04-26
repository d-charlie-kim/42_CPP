#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat default constructor called\n";
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat& origin) : WrongAnimal(origin) {
	std::cout << "WrongCat copy constructor called\n";
	*this = origin;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	std::cout << "WrongCat copy assignment operator called\n";
	type = other.type;
	return *this;
}

const std::string& WrongCat::getType() const{
	return type;
}

void WrongCat::makeSound() const{
	std::cout << "[ ... ]\n";
}
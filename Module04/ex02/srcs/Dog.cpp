#include "../includes/Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog default constructor called\n";
	type = "Dog";
	_brainPTR = new Brain("Dog's default idea");
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
	delete _brainPTR;
}

Dog::Dog(const Dog& origin) : Animal(origin) {
	std::cout << "Dog copy constructor called\n";
	_brainPTR = new Brain();
	*this = origin;
}

Dog& Dog::operator=(const Dog& other){
	std::cout << "Dog copy assignment operator called\n";
	type = other.getType();
	*_brainPTR = *(other._brainPTR);
	return *this;
}

void Dog::makeSound() const{
	std::cout << "[ Woof! Woof!! ~Woof!!! ]\n";
}

void Dog::sayIdea(int index) const{
	std::cout << "[[ " << _brainPTR->getIdea(index) << " ]]" << std::endl;
}

void Dog::putInBrain(const std::string& idea, int index) {
	_brainPTR->setIdea(idea, index);
}

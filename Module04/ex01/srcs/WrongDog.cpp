#include "../includes/WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal() {
	std::cout << "WrongDog default constructor called\n";
	type = "WrongDog";
	_brainPTR = new Brain("WrongDog's default idea");
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called\n";
	delete _brainPTR;
}

WrongDog::WrongDog(const WrongDog& origin) : WrongAnimal(origin) {
	std::cout << "WrongDog copy constructor called\n";
	_brainPTR = new Brain();
	*this = origin;
}

WrongDog& WrongDog::operator=(const WrongDog& other){
	std::cout << "WrongDog copy assignment operator called\n";
	type = other.getType();
	*_brainPTR = *(other._brainPTR);
	return *this;
}

void WrongDog::makeSound() const{
	std::cout << "[ Woof! Woof!! ~Woof!!! ]\n";
}

void WrongDog::sayIdea(int index) const{
	std::cout << "[[ " << _brainPTR->getIdea(index) << " ]]" << std::endl;
}

void WrongDog::putInBrain(const std::string& idea, int index) {
	_brainPTR->setIdea(idea, index);
}

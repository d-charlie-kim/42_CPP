#include "../includes/Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat default constructor called\n";
	type = "Cat";
	_brainPTR = new Brain("Cat's default idea");
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
	delete _brainPTR;
}

Cat::Cat(const Cat& origin) : Animal(origin) {
	std::cout << "Cat copy constructor called\n";
	_brainPTR = new Brain();
	*this = origin;
}

Cat& Cat::operator=(const Cat& other){
	std::cout << "Cat copy assignment operator called\n";
	type = other.getType();
	*_brainPTR = *(other._brainPTR);
	return *this;
}

void Cat::makeSound() const{
	std::cout << "[ ... ]\n";
}

void Cat::sayIdea(int index) const{
	std::cout << "[[ " << _brainPTR->getIdea(index) << " ]]" << std::endl;
}

void Cat::putInBrain(std::string& idea, int index) {
	_brainPTR->setIdea(idea, index);
}

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = "\0";
}

Brain::Brain(const std::string& defaultIdea) {
	std::cout << "Brain constructor called and default idea set\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = defaultIdea;
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain& origin) {
	std::cout << "Brain copy constructor called\n";
	*this = origin;
}

Brain& Brain::operator=(const Brain& other){
	std::cout << "Brain copy assignment operator called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	return *this;
}

std::string Brain::getIdea(int index) const {
	return _ideas[index];
}

void Brain::setIdea(const std::string& idea, int index) {
	_ideas[index] = idea;
}

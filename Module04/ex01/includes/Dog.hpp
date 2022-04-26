#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
	 Brain *_brainPTR;

	public:
	 Dog();
	 ~Dog();
	 Dog(const Dog& origin);
	 Dog& operator=(const Dog& other);

	 virtual void makeSound() const;
	 void sayIdea(int index) const;
	 void putInBrain(const std::string& idea, int index);
};

#endif
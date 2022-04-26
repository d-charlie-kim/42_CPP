#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
	 Brain *_brainPTR;

	public:
	 Cat();
	 ~Cat();
	 Cat(const Cat& origin);
	 Cat& operator=(const Cat& other);

	 virtual void makeSound() const;
	 void sayIdea(int index) const;
	 void putInBrain(std::string& idea, int index);
};

#endif
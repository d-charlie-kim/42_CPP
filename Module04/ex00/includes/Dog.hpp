#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:
	 std::string type;

	public:
	 Dog();
	 ~Dog();
	 Dog(const Dog& origin);
	 Dog& operator=(const Dog& other);

	 virtual const std::string& getType() const;
	 virtual void makeSound() const;
};

#endif
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:
	 std::string type;

	public:
	 Cat();
	 ~Cat();
	 Cat(const Cat& origin);
	 Cat& operator=(const Cat& other);

	 virtual const std::string& getType() const;
	 virtual void makeSound() const;
};

#endif
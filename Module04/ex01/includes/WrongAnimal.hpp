#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
	 std::string type;

	public:
	 WrongAnimal();
	 virtual ~WrongAnimal();
	 WrongAnimal(const WrongAnimal& origin);
	 WrongAnimal& operator=(const WrongAnimal& other);

	 void setType(std::string type_);
	 const std::string& getType() const;
	 void makeSound() const;
};

#endif
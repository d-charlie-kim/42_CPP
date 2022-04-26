#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:
	 std::string type;

	public:
	 WrongCat();
	 ~WrongCat();
	 WrongCat(const WrongCat& origin);
	 WrongCat& operator=(const WrongCat& other);

	 const std::string& getType() const;
	 void makeSound() const;
};

#endif
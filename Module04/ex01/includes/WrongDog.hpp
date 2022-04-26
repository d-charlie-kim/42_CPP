#ifndef WrongDog_HPP
#define WrongDog_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongDog : public WrongAnimal {
	private:
	 Brain *_brainPTR;

	public:
	 WrongDog();
	 ~WrongDog();
	 WrongDog(const WrongDog& origin);
	 WrongDog& operator=(const WrongDog& other);

	 virtual void makeSound() const;
	 void sayIdea(int index) const;
	 void putInBrain(const std::string& idea, int index);
};

#endif
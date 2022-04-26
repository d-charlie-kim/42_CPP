#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	public:
	 Brain();
	 Brain(const Brain& origin);
	 Brain(const std::string& defaultIdea);
	 ~Brain();
	 Brain& operator=(const Brain& other);

	 std::string getIdea(int index) const;
	 void setIdea(const std::string& idea, int index);

	private:
	 std::string _ideas[100];
};

#endif
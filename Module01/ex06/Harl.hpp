#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

class Harl {
public:
	Harl();
	~Harl();

	void complain(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();

	int find(std::string level);
	std::string _levels[4];
};

#endif

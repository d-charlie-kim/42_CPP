#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

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

	 typedef void (Harl::*FuncPtr)(void);
	 FuncPtr _pFunc[4];
	 std::string _levels[4];
};

#endif

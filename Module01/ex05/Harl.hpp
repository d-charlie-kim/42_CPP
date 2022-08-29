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

	void (Harl::*_pFunc[4])();
	std::string _levels[4];
};

#endif

/* 
	이렇게 typedef 사용하면 멤버 함수 포인터를 선언하기 편하다.
	
	typedef void (Harl::*FuncPtr)(void);
	FuncPtr _pFunc[4];
*/

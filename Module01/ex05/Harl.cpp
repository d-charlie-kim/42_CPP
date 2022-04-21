#include "Harl.hpp"

Harl::Harl() {
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	_pFunc[0] = &Harl::debug;
	_pFunc[1] = &Harl::info;
	_pFunc[2] = &Harl::warning;
	_pFunc[3] = &Harl::error;
}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	
	for (int i = 0; i < 4; i++) {
		if (_levels[i] == level) {
			(this->*_pFunc[i])();
			return ;
		}
	}
	std::cout << "Error\n" << ": Not Found\n";
}

void Harl::debug() {
	std::cout << "[ DEBUG ]\n";
	std::cout << "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"\n";
}

void Harl::info() {
	std::cout << "[ INFO ]\n";
	std::cout << "\"I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"\n";
}

void Harl::warning() {
	std::cout << "[ WARNING ]\n";
	std::cout << "\"I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas you started working here since last month.\"\n";
}

void Harl::error() {
	std::cout << "[ ERROR ]\n";
	std::cout << "\"This is unacceptable! I want to speak to the manager now.\"\n";
}

#include "Harl.hpp"

Harl::Harl() {
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
}

Harl::~Harl() {}

int Harl::find(std::string level) {
	for (int i = 0; i < 4; i++) {
		if (_levels[i] == level)
			return (i);
	}
	return (-1);
}

void Harl::complain(std::string level) {
	int num;
	num = find(level);

	switch(num) {
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARNING:
			this->warning();
		case ERROR:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

void Harl::debug() {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
	std::cout << "I really do!\n\n";
}

void Harl::info() {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning() {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error() {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

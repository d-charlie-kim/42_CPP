#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {

}

void Harl::debug() {
	std::cout << "[ DEBUG ]\n";
	std::cout << ": \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"\n";
}

void Harl::info() {
	std::cout << "[ INFO ]\n";
	std::cout << ": \"I cannot believe adding extra bacon costs more money.";
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

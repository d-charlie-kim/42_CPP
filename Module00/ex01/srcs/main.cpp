#include "PhoneBook.hpp"

int main(void) {

	PhoneBook phoneBook;
	std::string input;
	while (1) {
		phoneBook.printManual();
		std::getline(std::cin >> std::ws, input);
		if (std::cin.eof())
			exit(0);
		phoneBook.checkCommand(input);
	}
}

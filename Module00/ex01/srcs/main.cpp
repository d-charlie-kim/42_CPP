#include "PhoneBook.hpp"

int main(void) {

	PhoneBook phoneBook;
	std::string input;
	phoneBook.num = 0;
	while (1) {
		phoneBook.printManual();
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		phoneBook.checkCommand(input);
	}
}

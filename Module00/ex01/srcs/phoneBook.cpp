#include "phoneBook.hpp"

// void PhoneBook::drawTableTop() {
// 	std::cout << "+―――――――――――+――――――――――+―――――――――――+―――――――――――+\n";
// 	std::cout << "|   INDEX   |FIRST NAME| LAST NAME | NICK NAME |\n";
// 	std::cout << "+―――――――――――+――――――――――+―――――――――――+―――――――――――+\n";
// }

// void PhoneBook::drawTableRow() {
// 	std::cout << "+―――――――――――+――――――――――+―――――――――――+―――――――――――+\n";
// }

// void PhoneBook::printContact(int index) {
// 	index++;
// 	std::cout << "+――――――――――――――――――――――――――――――――――――――――――――――+\n";
// 	std::cout << "INDEX          : " << index << "\n";
// 	std::cout << "FIRST NAME     : " << contacts[index].getFirstName() << "\n";
// 	std::cout << "LAST NAME      : " << contacts[index].getLastName() << "\n";
// 	std::cout << "NICK NAME      : " << contacts[index].getNickName() << "\n";
// 	std::cout << "PHONE NUMBER   : " << contacts[index].getPhoneNumber() << "\n";
// 	std::cout << "DARKEST SECRET : " << contacts[index].getDarkestSecret() << "\n";
// 	std::cout << "+――――――――――――――――――――――――――――――――――――――――――――――+\n";
// }

void PhoneBook::checkCommand(std::string input) {
	if (input == "ADD") {
		std::cout << "1111\n";
	} else if (input == "SEARCH") {
		PhoneBook::searchcontact();
	} else if (input == "EXIT") {
		std::exit(0);
	} else
		return ;
}

void PhoneBook::printManual() {
	std::cout << "\n  + VALID  COMMANDS +\n";
	std::cout << "[ ADD | SEARCH | EXIT ]\n";
	std::cout << "\n" << "COMMAND: ";
}

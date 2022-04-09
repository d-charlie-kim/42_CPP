#include "phoneBook.hpp"

void PhoneBook::drawTableTop() {
	std::cout << "+―――――――――+――――――――――+――――――――――+――――――――――+\n";
	std::cout << "|  INDEX  |FIRST NAME|LAST NAME |NICK NAME |\n";
 	std::cout << "+―――――――――+――――――――――+――――――――――+――――――――――+\n";
}

void PhoneBook::drawTableRow() {
	std::cout << "+―――――――――+――――――――――+――――――――――+――――――――――+\n";
}

void PhoneBook::selectedContact(int index) {
	std::cout << "+――――――――――――――――――――――――――――――――――――――――――+\n";
	std::cout << "INDEX          : " << index + 1 << "\n";
	std::cout << "FIRST NAME     : " << contacts[index].getFirstName() << "\n";
	std::cout << "LAST NAME      : " << contacts[index].getLastName() << "\n";
	std::cout << "NICK NAME      : " << contacts[index].getNickName() << "\n";
	std::cout << "PHONE NUMBER   : " << contacts[index].getPhoneNumber() << "\n";
	std::cout << "DARKEST SECRET : " << contacts[index].getDarkestSecret() << "\n";
	std::cout << "+――――――――――――――――――――――――――――――――――――――――――+\n";
}

void PhoneBook::checkCommand(std::string input) {
	if (input == "ADD") {
		PhoneBook::addContact();
	} else if (input == "SEARCH") {
		PhoneBook::searchContact();
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

void PhoneBook::addContact() {
	int index;
	index = num % 8;
	std::cout << "\n  + FILL IN THE FORM +\n\n";
	contacts[index].setFirstName();
	contacts[index].setLastName();
	contacts[index].setNickName();
	contacts[index].setPhoneNumber();
	contacts[index].setDarkestSecret();
	num++;
}

void PhoneBook::printNames(std::string name) {
	if (name.length() > 9)
		std::cout << name.substr(0, 9) << '.';
	else {
		for (unsigned int i = 0; i < 10 - name.length(); i++) {
			std::cout << ' ';
		}
		std::cout << name;
	}
}

void PhoneBook::printContact(int index) {
	printNames(contacts[index].getFirstName());
	std::cout << "|";
	printNames(contacts[index].getLastName());
	std::cout << "|";
	printNames(contacts[index].getNickName());
	std::cout << "|\n";
}

void PhoneBook::searchContact() {
	std::cout << "\n              + PHONE BOOK +\n";
	int index;
	if (num > 8)
		index = num % 8;
	else
		index = 0;
	drawTableTop();
	for (int i = 0; i < num; i++) {
		if (i == 8)
			break ;
		std::cout << "|    " << i + 1 << "    |";
		printContact((index + i) % 8);
		drawTableRow();
	}
	std::cout << "\n + PLEASE SELECT INDEX NUMBER +\n\n" << "INDEX: ";
	// int index;
	//std::getline(std::cin, index);
	//selectedContact(index - 1);
	//std::cout << "\n";
}

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
	index++;
	std::cout << "+――――――――――――――――――――――――――――――――――――――――――+\n";
	std::cout << "INDEX          : " << index << "\n";
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
	std::cout << "\n  + FILL IN THE FORM +\n\n";
	contacts[num].setFirstName();
	contacts[num].setLastName();
	contacts[num].setNickName();
	contacts[num].setPhoneNumber();
	contacts[num].setDarkestSecret();
	num++;
}

void PhoneBook::printNames(std::string name) {
	if (name.length() > 9)
		std::cout << name.substr(0, 9) << '.';
	else {
		for (unsigned int i = 0; i < 10; i++) {
			if (i >= name.length())
				std::cout << ' ';
			else
				std::cout << name[i];
		}
	}
}

void PhoneBook::printContact(int index) {
	std::cout << "|    " << index + 1 << "    |";
	printNames(contacts[index].getFirstName());
	std::cout << "|";
	printNames(contacts[index].getLastName());
	std::cout << "|";
	printNames(contacts[index].getNickName());
	std::cout << "|\n";
}

void PhoneBook::searchContact() {
	std::cout << "\n              + PHONE BOOK +\n";
	drawTableTop();
	for (int i = 0; i < num; i++) {
		if (i == 8)
			break ;
		printContact(i);
		drawTableRow();
	}
	std::cout << "\n + PLEASE SELECT INDEX NUMBER +\n\n" << "INDEX: ";
	// int index;
	//std::getline(std::cin, index);
	//selectedContact(index);
	//std::cout << "\n";
}

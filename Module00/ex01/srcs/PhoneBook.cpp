#include "PhoneBook.hpp"

void PhoneBook::drawTableTop() {
	std::cout << "+――――――――――+――――――――――+――――――――――+――――――――――+\n";
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
 	std::cout << "+――――――――――+――――――――――+――――――――――+――――――――――+\n";
}

void PhoneBook::drawTableRow() {
	std::cout << "+――――――――――+――――――――――+――――――――――+――――――――――+\n";
}

void PhoneBook::selectedContact(int index) {
	std::cout << "+―――――――――――――――――――――――――――――――――――――――――――+\n";
	std::cout << "INDEX          : " << index << "\n";
	std::cout << "FIRST NAME     : " << contacts[index].getFirstName() << "\n";
	std::cout << "LAST NAME      : " << contacts[index].getLastName() << "\n";
	std::cout << "NICKNAME       : " << contacts[index].getNickName() << "\n";
	std::cout << "PHONE NUMBER   : " << contacts[index].getPhoneNumber() << "\n";
	std::cout << "DARKEST SECRET : " << contacts[index].getDarkestSecret() << "\n";
	std::cout << "+―――――――――――――――――――――――――――――――――――――――――――+\n";
}

void PhoneBook::checkCommand(std::string input) {
	if (input == "ADD") {
		addContact();
	} else if (input == "SEARCH") {
		if (num == 0)
			emptyPhoneBook();
		else
			searchContact();
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

void PhoneBook::emptyPhoneBook() {
	std::cout << "\n!!! PHONE BOOK IS EMPTY !!!\n";
}

bool PhoneBook::checkIndex(std::string index) {
	if (index == "0" || index == "1" || index == "2" || index == "3" || \
	index == "4" || index == "5" || index == "6" || index == "7") {
		int i = 0;
		std::stringstream ssInt(index);
		ssInt >> i;
		if (num > 8 || num > i)
	 		return true;
		else
			return false;
	}
	else
		return false;
}

void PhoneBook::IndexError() {
	std::cout << "\n!!! PLEASE ENTER VALID INDEX !!!\n";
}

void PhoneBook::contactSelecting() {
	std::string selectIndex;
	int index = 0;

	while (1) {
		std::cout << "\n + PLEASE SELECT INDEX NUMBER +\n\n" << "INDEX: ";
		std::getline(std::cin, selectIndex);
		if (std::cin.eof())
			exit(0);
		if (checkIndex(selectIndex) == false) {
			IndexError();
			continue ;
		}
		std::stringstream ssInt(selectIndex);
		ssInt >> index;
		selectedContact(index);
		std::cout << "\n";
		break ;
	}
}

void PhoneBook::printPhoneBook() {
	std::cout << "\n              + PHONE BOOK +\n";
	drawTableTop();
	for (int i = 0; i < num; i++) {
		if (i == 8)
			break ;
		std::cout << "|         " << i << "|";
		printContact(i);
		drawTableRow();
	}
}

void PhoneBook::searchContact() {
	printPhoneBook();
	contactSelecting();
}

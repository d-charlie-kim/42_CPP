#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
	public:
	 int num;
	 void checkCommand(std::string input);
	 void printManual();
	 
	private:
	 Contact contacts[8];
	 void drawTableTop();
	 void drawTableRow();
	 void selectedContact(int index);
	 void printContact(int index);
	 void printNames(std::string name);
	 void addContact();
	 void searchContact();
};

#endif

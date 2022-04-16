#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <sstream>

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
	 void contactSelecting();
	 void printContact(int index);
	 void printNames(std::string name);
	 void addContact();
	 void IndexError();
	 bool checkIndex(std::string index);
	 void searchContact();
	 void printPhoneBook();
	 void emptyPhoneBook();
};

#endif

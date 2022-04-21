#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <sstream>

class PhoneBook {
	public:
	 int _num;
	 void checkCommand(std::string input);
	 void printManual() const;
	 PhoneBook();
	 ~PhoneBook();
	 
	private:
	 Contact contacts[8];
	 void drawTableTop() const;
	 void drawTableRow() const;
	 void selectedContact(int index);
	 void contactSelecting();
	 void printContact(int index);
	 void printNames(std::string name);
	 void addContact();
	 void IndexError() const;
	 bool checkIndex(std::string index);
	 void searchContact();
	 void printPhoneBook();
	 void emptyPhoneBook() const;
};

#endif

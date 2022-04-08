
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
	public:
	 void checkCommand(std::string input);
	 void printManual();
	 
	private:
	 Contact contacts[8];
	 void drawTableTop();
	 void drawTableRow();
	 void printContact(int index);
	 void addContact();
	 void searchContact();

};

#endif


/*
	1. PhoneBook 클래스와 Contact 클래스에는 어떤게 담겨야 하는가
	2. 어떤건 public 어떤건 private, 차이와 장단점은 무엇인가
	3. 
*/

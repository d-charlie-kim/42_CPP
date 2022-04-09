#include "contact.hpp"
#include "phoneBook.hpp"

void Contact::setFirstName() {
	std::cout << "First Name: ";
	std::getline(std::cin, firstname);
	if (std::cin.eof())
		exit(0);
}

void Contact::setLastName() {
	std::cout << "Last Name: ";
	std::getline(std::cin, lastname);
	if (std::cin.eof())
		exit(0);
}

void Contact::setNickName() {
	std::cout << "NickName: ";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		exit(0);
}

void Contact::setPhoneNumber() {
	std::cout << "Phone Number: ";
	std::getline(std::cin, phonenumber);
	if (std::cin.eof())
		exit(0);
}

void Contact::setDarkestSecret() {
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestsecret);
	if (std::cin.eof())
		exit(0);
}

std::string Contact::getFirstName() {
	return (firstname);
}

std::string Contact::getLastName() {
	return (lastname);
}

std::string Contact::getNickName() {
	return (nickname);
}

std::string Contact::getPhoneNumber() {
	return (phonenumber);
}

std::string Contact::getDarkestSecret() {
	return (darkestsecret);
}

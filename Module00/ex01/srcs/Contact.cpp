#include "Contact.hpp"

void Contact::setFirstName() {
	std::cout << "First Name: ";
	std::getline(std::cin, _firstname);
	if (std::cin.eof())
		exit(0);
}

void Contact::setLastName() {
	std::cout << "Last Name: ";
	std::getline(std::cin, _lastname);
	if (std::cin.eof())
		exit(0);
}

void Contact::setNickName() {
	std::cout << "NickName: ";
	std::getline(std::cin, _nickname);
	if (std::cin.eof())
		exit(0);
}

void Contact::setPhoneNumber() {
	std::cout << "Phone Number: ";
	std::getline(std::cin, _phonenumber);
	if (std::cin.eof())
		exit(0);
}

void Contact::setDarkestSecret() {
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _darkestsecret);
	if (std::cin.eof())
		exit(0);
}

std::string Contact::getFirstName() {
	return (_firstname);
}

std::string Contact::getLastName() {
	return (_lastname);
}

std::string Contact::getNickName() {
	return (_nickname);
}

std::string Contact::getPhoneNumber() {
	return (_phonenumber);
}

std::string Contact::getDarkestSecret() {
	return (_darkestsecret);
}

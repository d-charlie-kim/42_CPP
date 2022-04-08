#include "contact.hpp"
#include "phoneBook.hpp"

void Contact::setFirstName() {
	std::cout << "First Name: ";
	std::getline(std::cin, firstname);
}

void Contact::setLastName() {
	std::cout << "Last Name: ";
	std::getline(std::cin, lastname);
}

void Contact::setNickName() {
	std::cout << "NickName: ";
	std::getline(std::cin, nickname);
}

void Contact::setPhoneNumber() {
	std::cout << "Phone Number: ";
	std::getline(std::cin, phonenumber);
}

void Contact::setDarkestSecret() {
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestsecret);
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

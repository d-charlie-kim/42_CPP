#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\nMemory address of the string variable\n";
	std::cout << "---> : " << &str << "\n";
	std::cout << "Memory address held by pointer\n";
	std::cout << "---> : " << stringPTR << "\n";
	std::cout << "Memory address held by reference\n";
	std::cout << "---> : " << &stringREF << "\n";

	std::cout << "\nvalue of the string variable\n";
	std::cout << "---> : " << str << "\n";
	std::cout << "value pointed to by pointer\n";
	std::cout << "---> : " << *stringPTR << "\n";
	std::cout << "value pointed to by reference\n";
	std::cout << "---> : " << stringREF << "\n";

	return (0);
}
#include <iostream>
#include <exception>
#include "Convert.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "ERROR: ./convert <literal> required." << std::endl;
		return 1;
	}
	try {
		Convert scalar(argv[1]);
		scalar.detectType();
		std::cout << std::fixed;
		std::cout.precision(1);
		scalar.fromToAnother();
		}
		catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

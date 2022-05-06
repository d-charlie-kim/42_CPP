#include <iostream>
#include <exception>
#include "Convert.hpp"

int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "ERROR: Parameter required." << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; i++) {
		std::cout << "\n------\ninput: " << argv[i] << std::endl << std::endl;
		try {
			Convert scalar(argv[i]);
			scalar.detectType();
			std::cout << std::fixed;
			std::cout.precision(1);
			scalar.fromToAnother();

			}
			catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}

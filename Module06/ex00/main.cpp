#include <iostream>
#include <cstdlib>

// #include "Convert.hpp"

int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "ERROR: Parameter required." << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; i++) {
		double num;
		num = strtod(argv[i], NULL);
		std::cout << num << std::endl;
		// std::cout << static_cast<char>(num) << std::endl
		// std::cout << static_cast<float>(num) << std::endl;
		// try {
		// 	Convert scalar(argv[i]);
		// 	convert.detectType();
		// 	convert.fromToAnother();
		// }
	}
	std::cout << "\nDONE.\n";
	return 0;
}

/*
숫자로 바꾸면 0인데
그 자체로 범위 검사하면 127 -128 내일때.
길이가 1이라면
char
*/
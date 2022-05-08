#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 20

int main(void) {
	Array<int> numbers(MAX_VAL);
	int *check = new int[MAX_VAL];

	srand(time(0));
	for (unsigned int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		check[i] = value;
	}

	for (unsigned int i = 0; i < MAX_VAL; i++) {
		std::cout << numbers[i] << " ::: " << check[i] << std::endl;
	}

	delete[] check;

	Array<int> test1;
	test1 = numbers;
	Array<int> test2(test1);
	for (unsigned int i = 0; i < MAX_VAL; i++) {
		test2[i] = 100;
	}
	for (unsigned int i = 0; i < MAX_VAL; i++) {
		std::cout << test1[i] << " ::: " << test2[i] << std::endl;
	}

	try {
		numbers[-1] = 0;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		numbers[MAX_VAL] = 0;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Array<std::string> stringTest(5);
	std::string *strPtr = new std::string[5];

	std::string value[] = {"hello", "world", "good", "morning", "everyone"};
	for (unsigned int i = 0; i < 5; i++) {
		stringTest[i] = value[i];
		strPtr[i] = value[i];
	}

	for (unsigned int i = 0; i < 5; i++) {
		std::cout << stringTest[i] << " ::: " << strPtr[i] << std::endl;
	}

	delete[] strPtr;

	return 0;
}

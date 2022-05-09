#include "Data.hpp"
#include <cstdint>

int main(void) {
	Data	test = {"hello", "world", 123};
	uintptr_t	keep;
	Data		*check;

	std::cout << "\n-------------\n";
	std::cout << test.data1 << std::endl;
	std::cout << test.data2 << std::endl;
	std::cout << test.number << std::endl;
	std::cout << &test << std::endl;

	std::cout << "-------------\n\n";
	std::cout << "Serialize and Deserailze\n";
	keep = serialize(&test);
	check = deserialize(keep);
	std::cout << keep << std::endl;
	std::cout << "\n-------------\n";

	std::cout << check->data1 << std::endl;
	std::cout << check->data2 << std::endl;
	std::cout << check->number << std::endl;
	std::cout << check << std::endl;
	std::cout << "-------------\n";

	std::cout << "TEST DONE \n";
}
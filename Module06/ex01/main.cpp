#include "Serialize.hpp"

int main(void) {
	Serialize	test;
	uintptr_t	keep;
	t_Data		*check;

	std::cout << "\n-------------\n";
	std::cout << test.getData()->data1 << std::endl;
	std::cout << test.getData()->data2 << std::endl;
	std::cout << test.getData()->number << std::endl;
	std::cout << test.getData() << std::endl;

	std::cout << "-------------\n\n";
	std::cout << "Serialize and Deserailze\n";
	keep = test.serialize(test.getData());
	check = test.deserialize(keep);
	std::cout << keep << std::endl;
	std::cout << "\n-------------\n";

	std::cout << check->data1 << std::endl;
	std::cout << check->data2 << std::endl;
	std::cout << check->number << std::endl;
	std::cout << check << std::endl;
	std::cout << "-------------\n";

	std::cout << "TEST DONE \n";
}
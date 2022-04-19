#include "Harl.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Parameter Error\n";
		return (1);
	}
	Harl harl;
	std::string message = argv[1];
	harl.complain(message);
	return (0);
}

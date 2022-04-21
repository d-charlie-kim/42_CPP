#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl harl;
	if (argc != 2) {
		std::cout << "Error\n" << "./Harl_2.0 <Level> required";
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}

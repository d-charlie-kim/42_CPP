#include "iter.hpp"

int main(void) {
	int	i[5] = {0, 1, 2, 3, 4};
	std::string s[3] = {"hello", "good", "world"};
	char c[4] = {'c', 'p', 'p', '+'};
	double d[6] = {1.1, 3.3, 5.5, 7.7, 9.9, 33.33};

	std::cout << "INT" << std::endl;
	iter(i, sizeof(i) / sizeof(int), print);
	std::cout << "STRING" << std::endl;
	iter(s, sizeof(s) / sizeof(std::string), print);
	std::cout << "CHAR" << std::endl;
	iter(c, sizeof(c) / sizeof(char), print);
	std::cout << "DOUBLE" << std::endl;
	iter(d, sizeof(d) / sizeof(double), print);
}

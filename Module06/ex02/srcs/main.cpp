#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void) {
	Base *base = generate();
	if (base == NULL) {
		std::cout << "Error, fail allocate" << std::endl;
		return (1);
	}
	identify(base);
	identify(*base);

	delete base;
	return 0;
}
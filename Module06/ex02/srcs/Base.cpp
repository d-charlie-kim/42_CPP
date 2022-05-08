#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>

Base::~Base() {}

Base* generate() {
	srand(time(0));

	switch (rand() % 3) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A\n";
	} catch (const std::exception &e) {}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B\n";
	} catch (const std::exception &e) {}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C\n";
	} catch (const std::exception &e) {}
}

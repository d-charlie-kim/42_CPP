#include "../includes/Bureaucrat.hpp"

int main(void) {

	std::cout << "\n[[   Grade < 1  -->  TOO HIGH   ]]\n";
	std::cout << "[[   Grade > 150  -->  TOO LOW   ]]\n";

	std::cout << "\n -----Constructor Exception Test------ \n\n";
	
	try {
		std::cout << "< Default Case >\n";
		Bureaucrat a;
		Bureaucrat b("HELLO");
		Bureaucrat c("WORLD", 100);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "< Too Low Case >\n";
		Bureaucrat aa(149);
		std::cout << aa << std::endl;
		Bureaucrat bb(151);
		std::cout << bb << std::endl;
		Bureaucrat cc(150);
		std::cout << cc << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "< Too High Case >\n";
		Bureaucrat aaa(1);
		std::cout << aaa << std::endl;
		Bureaucrat bbb(0);
		std::cout << bbb << std::endl;
		Bureaucrat ccc(-1);
		std::cout << ccc << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n -----Increment / Decrement Test------ \n\n";

	try {
		std::cout << "< Increment Case >\n";
		Bureaucrat alpha("alpha", 2);
		std::cout << alpha << std::endl;
		alpha.incrementGrade();
		std::cout << alpha << std::endl;
		alpha.incrementGrade();
		std::cout << alpha << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "< Decrement Case >\n";
		Bureaucrat beta("beta", 149);
		std::cout << beta << std::endl;
		beta.decrementGrade();
		std::cout << beta << std::endl;
		beta.decrementGrade();
		std::cout << beta << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n -----Copy Test------ \n\n";

	try {
		std::cout << "< Copy Constructor Case >\n";
		Bureaucrat first("frst", 2);
		std::cout << first << std::endl;
		Bureaucrat second(first);
		second.incrementGrade();
		std::cout << first << std::endl;
		std::cout << second << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST COMPLETE\n";

	return 0;
}
#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

int main(void) {

	std::cout << "\n----- Constructor Error Test -----\n\n";

	// Form aaa("aaa", 0, 0); // abort case :: try 없이 throw 하면?

	try {
		Form first("first", 0, 12);
		std::cout << "HELLO WORLD\n";
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form second("second", 155, 12);
		std::cout << "HELLO WORLD\n";
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form third("third", 0, 155);
		std::cout << "HELLO WORLD\n";
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Main Test Set-----\n\n";

	Bureaucrat charlie("charlie", 10);
	Form       highPaper("high", 2, 2);
	Form       lowPaper("low", 13, 13);

	std::cout << charlie << std::endl;
	std::cout << highPaper << std::endl;
	std::cout << lowPaper << std::endl;

	std::cout << "\n----- Main Test Start-----\n\n";

	try {
		charlie.signForm(highPaper);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		charlie.signForm(lowPaper);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << highPaper << std::endl;
	std::cout << lowPaper << std::endl;

	try {
		charlie.signForm(highPaper);
	} catch (const std::exception &e) {
		std::cout << e.what() << '\n';
	}

	std::cout << std::endl;

	try {
		charlie.signForm(lowPaper);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n- - - - - - - - - - - - - - - - - - - \n\n";

	charlie.incrementGrade();
	charlie.incrementGrade();
	charlie.incrementGrade();
	charlie.incrementGrade();
	charlie.incrementGrade();
	charlie.incrementGrade();
	charlie.incrementGrade();
	charlie.incrementGrade();
	std::cout << charlie << std::endl;

	try {
		charlie.signForm(highPaper);
		std::cout << std::endl;
		std::cout << highPaper << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST COMPLETE\n";

	return 0;
}
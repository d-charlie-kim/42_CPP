#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat one("one", 150);
	Bureaucrat two("two", 90);
	Bureaucrat three("three", 50);
	Bureaucrat four("four", 30);
	Bureaucrat five("five", 4);

	Form *forms[3] = {new ShrubberyCreationForm("Shrubbery"),
					new RobotomyRequestForm("Robotomy"),
					new PresidentialPardonForm("Presidential")};

	std::cout << one << two << three << four << five << std::endl;

	std::cout << "[ No Sign Error Test ]\n\n";
	for (int i = 0; i < 3; i++) {
		one.executeForm(*forms[i]);
		two.executeForm(*forms[i]);
		three.executeForm(*forms[i]);
		four.executeForm(*forms[i]);
		five.executeForm(*forms[i]);
		std::cout << std::endl;
	}

	std::cout << "\n[ Sign Test ]\n\n";
	for (int i = 0; i < 3; i++) {
		one.signForm(*forms[i]);
		two.signForm(*forms[i]);
		three.signForm(*forms[i]);
		four.signForm(*forms[i]);
		five.signForm(*forms[i]);
		std::cout << std::endl;
	}

	std::cout << "\n[ Execute Test ]\n\n";
	for (int i = 0; i < 3; i++) {
		one.executeForm(*forms[i]);
		two.executeForm(*forms[i]);
		three.executeForm(*forms[i]);
		four.executeForm(*forms[i]);
		five.executeForm(*forms[i]);
		std::cout << std::endl;
	}

	for (int i = 0; i < 3; i++)
		delete forms[i];
}

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";
}

Intern::Intern(const Intern& origin) {
	(void)origin;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

Form *Intern::makeForm(const std::string& formName, const std::string& target) {
	int index = 3;
	for (int i = 0; i < 3; i++)
		if (forms[i] == formName)
			index = i;
	try {
		switch (index) {
			case 0:
				return (createShrubberyForm(target));
			case 1:
				return (createRobotomyForm(target));
			case 2:
				return (createPresidentialForm(target));
			default:
				throw InternException();
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (NULL);
}

Form *Intern::createShrubberyForm(const std::string& target) {
	std::cout << "> Intern creates ShrubberyCreationForm\n";
	return (new ShrubberyCreationForm(target));
}

Form *Intern::createRobotomyForm(const std::string& target) {
	std::cout << "> Intern creates RobotomyRequestForm\n";
	return (new RobotomyRequestForm(target));
}

Form *Intern::createPresidentialForm(const std::string& target) {
	std::cout << "> Intern creates PresidentialPardonForm\n";
	return (new PresidentialPardonForm(target));
}

const char *Intern::InternException::what() const throw() {
	return ("FAIL, can not find the valid form name");
}
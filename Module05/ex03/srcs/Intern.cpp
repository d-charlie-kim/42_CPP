#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {

}

Intern::Intern(const Intern& origin) {

}

Intern::~Intern() {

}

Intern& Intern::operator=(const Intern& other) {

}

Form *Intern::makeForm(const std::string& formName, const std::string& target) {

}

Form *Intern::createShrubberyForm(const std::string& target) {

}

Form *Intern::createRobotomyForm(const std::string& target) {

}

Form *Intern::createPresidentialForm(const std::string& target) {

}

const char *Intern::InternException::what() const throw() {

}
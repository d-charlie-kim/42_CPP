#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRF", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: Form("RobotomyRF", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& origin)
: Form("RobotomyRF", 72, 45), _target(origin.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	(void)other;
	return *this;
}

const std::string& RobotomyRequestForm::getTarget() const {
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	Form::execute(executor);
	std::cout << "Drrrr.. Drrrrrrrrrrrrrrr... (Drilling noises)\n";
	std::srand(time(0));
	if (std::rand() % 2)
		std::cout << "SUCCESS: < " << this->getTarget() << " > has been robotomized.\n";
	else {
		std::cout << "GOOD! < " << this->getName() << " > " << "executed < " << this->getName() << " >\nBUT ";
		throw RobotomizeFailException();
	}
}

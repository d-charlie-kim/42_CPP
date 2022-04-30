#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(int grade)
: _name("default") {
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const std::string& name) 
: _name(name), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) 
: _name(name) {
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& origin) 
: _name(origin.getName()), _grade(origin.getGrade()) {
	*this = origin;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	this->_grade = other.getGrade();
	return *this;
}

const std::string& Bureaucrat::getName() const {
	return _name;
}

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	setGrade(this->getGrade() - 1);
}

void Bureaucrat::decrementGrade() {
	setGrade(this->getGrade() + 1);
}

std::ostream& operator<<(std::ostream &ost, const Bureaucrat &src) {
	ost << "[ " << src.getName() << " ]" << " Bureaucrat grade --> [ " << src.getGrade() << " ]\n";
	return ost;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("ERROR: TOO HIGH GRADE");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("ERROR: TOO LOW GRADE");
}

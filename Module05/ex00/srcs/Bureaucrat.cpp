#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(const std::string& name) {

}

Bureaucrat::Bureaucrat(const std::string& name, int grade) {

}

Bureaucrat::Bureaucrat(const Bureaucrat& origin) {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {

}

void Bureaucrat::setName(const std::string& name) {

}

const std::string& Bureaucrat::getName() const {

}

void Bureaucrat::setGrade(int grade) {

}

int Bureaucrat::getGrade() const {

}

void Bureaucrat::incrementGrade() {

}

void Bureaucrat::decrementGrade() {

}

std::ostream& operator<<(std::ostream &ost, const Bureaucrat &src) {

}


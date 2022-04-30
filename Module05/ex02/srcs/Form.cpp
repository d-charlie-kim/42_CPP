#include "../includes/Form.hpp"

Form::Form() 
: _name("default"), _gradeForSign(150), _gradeForExe(150) {
	_isSigned = false;
}

Form::Form(const std::string& name) 
: _name(name), _gradeForSign(150), _gradeForExe(150) {
	_isSigned = false;
}

Form::Form(const int gradeForSign, const int gradeForExe)
: _name("deafult"), _gradeForSign(gradeForSign), _gradeForExe(gradeForExe) {
	if (gradeForExe < 1 || gradeForSign < 1)
		throw GradeTooHighException();
	else if (gradeForExe > 150 || gradeForSign > 150)
		throw GradeTooLowException();
	_isSigned = false;
}

Form::Form(const std::string& name, const int gradeForSign, const int gradeForExe) 
: _name(name), _gradeForSign(gradeForSign), _gradeForExe(gradeForExe) {
	if (gradeForExe < 1 || gradeForSign < 1)
		throw GradeTooHighException();
	else if (gradeForExe > 150 || gradeForSign > 150)
		throw GradeTooLowException();
	_isSigned = false;
}

Form::Form(const Form& origin)
: _name(origin.getName()), _gradeForSign(origin.getGradeForSign()), _gradeForExe(origin.getGradeForExe()) {
	_isSigned = origin._isSigned;
}

Form& Form::operator=(const Form& other) {
	_isSigned = other._isSigned;
	return *this;
}

Form::~Form() {}

const std::string& Form::getName() const {
	return _name;
}

int Form::getGradeForSign() const {
	return _gradeForSign;
}

int Form::getGradeForExe() const {
	return _gradeForExe;
}

bool Form::getIsSigned() const {
	if (_isSigned)
		return true;
	else
		return false;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (this->_gradeForSign < bureaucrat.getGrade()) {
		std::cout << "FAIL! < " << bureaucrat.getName() << " >";
		std::cout << " couldn't sign < " << this->getName();
		std::cout << " >\n      because has too low grade to sign\n";
		throw GradeTooLowException();
	}
	else if (this->_isSigned)
		throw FormIsAlreadySigned();
	_isSigned = true;
}

void Form::execute(const Bureaucrat& executor) const {
	if (!this->getIsSigned())
		throw NotSignedException();
	if (executor.getGrade() > this->getGradeForExe()) {
		std::cout << "FAIL! < " << executor.getName() << " > ";
		std::cout << "couldn't execute < " << this->getName();
		std::cout << " >\n      because has too low grade to execute\n";
		throw GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream &ost, const Form &src) {
	ost << "Form [ " << src.getName() << " ]" << "\n";
	ost << " * is signed? ";
	if (src.getIsSigned())
		ost << " [ YES ]\n";
	else
		ost << " [ NO ]\n";
	ost << " * grade for sign --> [ " << src.getGradeForSign() << " ]\n";
	ost << " * grade for exe  --> [ " << src.getGradeForExe() << " ]\n";
	return ost;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("ERROR: TOO HIGH GRADE");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("ERROR: TOO LOW GRADE");
}

const char *Form::FormIsAlreadySigned::what() const throw() {
	return ("OH! Form is already signed");
}

const char *Form::NotSignedException::what() const throw() {
	return ("ERROR: Form need to be signed");
}

const char *Form::FileErrException::what() const throw() {
	return ("ERROR: Can not open the file");
}

const char *Form::RobotomizeFailException::what() const throw() {
	return ("SORRY ...robotomize failed...");
}

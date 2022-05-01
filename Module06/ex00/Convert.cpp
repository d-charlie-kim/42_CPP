#include "Convert.hpp"
#include <string>

Convert::Convert()
: _types("cidf") {}

Convert::Convert(const std::string& input)
: _input(input), _types("cidf") {
	_value = 0;
	_strlen = _input.length();
	_type = -1;
	_c = 0;
	_i = 0;
	_d = 0;
	_f = 0;
}

Convert::~Convert() {}

Convert::Convert(const Convert& origin)
: _input(this->getInput()) {
	*this = origin;
}

Convert& Convert::operator=(cost Convert& other) {
	// _input = other.getInput();
	// _d = other._d;
	// _c = other._c;
	// _i = other._i;
	// _f = other._f;
	// _d = other._d;
	// _type = other._type;
	// return *this;
}

char Convert::toChar() const {}

int Convert::toInt() const {}

float Convert::toFloat() const {}

double Convert::toDouble() const {}

void Convert::fromToAnother() const {
	switch (_type) {
		case 0:
			fromChar();
			break;
		case 1:
			fromInt();
			break;
		case 2:
			fromDouble();
			break;
		case 3:
			fromFloat();
			break;
		default:
			throw DefaultErrException();
	}
}

void Convert::fromChar() const {

	toInt();
	toDouble();
	toFloat();
}

void Convert::fromInt() const {
	toChar();

	toDouble();
	toFloat();
}

void Convert::fromDouble() const {
	toChar();
	toInt();

	toFloat();
}

void Convert::fromFloat() const {
	toChar();
	toInt();
	toDouble();

}

void Convert::detectType() {
	if (!detectChar() && !detectInt() && !detectDouble() && !detectFloat())
		throw DefaultErrException();
}

bool Convert::detectChar() {
	_type = 0;
	return true;
}

bool Convert::detectInt() {
	_type = 1;
	return true;
}

bool Convert::detectFloat() {
	_type = 2;
	return true;
}

bool Convert::detectDouble() {
	_type = 3;
	return true;
}

const char *Convert::DefaultErrException::what() const throw() {
	return ("ERROR");
}
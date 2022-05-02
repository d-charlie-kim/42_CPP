#include "Convert.hpp"
#include <string>

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const std::string& input)
: _input(input), _types("cfid") {
	_value = 0;
	_strlen = _input.length();
	_type = -1;
	_c = 0;
	_f = 0;
	_i = 0;
	_d = 0;
}

Convert::Convert(const Convert& origin)
: _input(this->getInput()) {
	*this = origin;
}

Convert& Convert::operator=(cost Convert& other) {
	_c = other._c;
	_f = other._f;
	_i = other._i;
	_d = other._d;
	_type = other._type;
	_strlen = other._strlen;
	_value = other._value;
	return *this;
}

void Convert::fromToAnother() const {
	void Convert::*pFunc[4]();

	pFunc[0] = &Convert::fromChar;
	pFunc[1] = &Convert::fromFloat;
	pFunc[2] = &Convert::fromInt;
	pFunc[3] = &Convert::fromDouble;

	this->*pFunc[_type];
}

void Convert::fromChar() const {
	// toInt
	// toDouble
	// tofloat
}

void Convert::fromInt() const {
	// toChar();

	// toDouble();
	// toFloat();
}

void Convert::fromDouble() const {
	// toChar();
	// toInt();

	// toFloat();
}

void Convert::fromFloat() const {
	// toChar();
	// toInt();
	// toDouble();

}

void Convert::detectType() {
	if (!detectChar() && !detectFloat() && !detectInt() && !detectDouble())
		throw DefaultErrException();
}

bool Convert::detectChar() {
	double	check = strtod(_input, NULL);
	int		temp = static_cast<int>(_input[0]);
	if (check == 0 && _strlen == 1 && temp < 128 && temp > -129)
		return false;
	_type = 0;
	return true;
}

bool Convert::detectFloat() {
	_type = 1;
	return true;
}

bool Convert::detectInt() {
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
#include <string>
#include <iostream>
#include <cstdlib>
#include <exception>
#include "Convert.hpp"

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const std::string& input)
: _input(input), _types("fid") {
	_pFunc[0] = &Convert::fromFloat;
	_pFunc[1] = &Convert::fromInt;
	_pFunc[2] = &Convert::fromDouble;
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

Convert& Convert::operator=(const Convert& other) {
	_pFunc[0] = other._pFunc[0];
	_pFunc[1] = other._pFunc[1];
	_pFunc[2] = other._pFunc[2];
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
	(this->*_pFunc[_type])();
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
	if (!detectFloat() && !detectInt() && !detectDouble())
		throw DefaultErrException();
}

// bool Convert::detectChar() {
// 	double	check = strtod(_input.c_str(), 0);
// 	int		temp = static_cast<int>(_input[0]);
// 	if (check == 0 && _strlen == 1 && temp < 128 && temp > -129)
// 		return false;
// 	else if (_input[0] == '0')
// 		return false;
// 	_type = 0;
// 	return true;
// }

bool Convert::detectFloat() {
	double check = strtod(_input.c_str(), 0);
	if (!check)
	_type = 0;
	return true;
}

bool Convert::detectInt() {
	_type = 1;
	return true;
}

bool Convert::detectDouble() {
	_type = 2;
	return true;
}

const std::string& Convert::getInput() const {
	return _input;
}

int Convert::getType() const {
	return _type;
}

const char *Convert::DefaultErrException::what() const throw() {
	return ("ERROR");
}
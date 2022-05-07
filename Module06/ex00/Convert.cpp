#include "Convert.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <climits>
#include <cfloat>
#include <cctype>
#include <sstream>

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const std::string& input)
: _input(input) {
	_pFunc[0] = &Convert::fromChar;
	_pFunc[1] = &Convert::fromInt;
	_pFunc[2] = &Convert::fromFloat;
	_pFunc[3] = &Convert::fromDouble;
	_strlen = _input.length();
	_type = -1;
	_fFlag = 0;
	_pointFlag = 0;
	_specialFlag = 0;
	_c = 0;
	_i = 0;
	_f = 0;
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
	_pFunc[3] = other._pFunc[3];
	_c = other._c;
	_i = other._i;
	_f = other._f;
	_d = other._d;
	_fFlag = other._fFlag;
	_pointFlag = other._pointFlag;
	_type = other._type;
	_strlen = other._strlen;
	_specialFlag = other._specialFlag;
	return *this;
}

void Convert::fromToAnother() const{
	if (_specialFlag)
		printSpecialValue();
	else {
		(this->*_pFunc[_type])();
	}
}

void Convert::printSpecialValue() const{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << _input << "f" << std::endl;
	std::cout << "double: " << _input << std::endl;
}

void Convert::fromChar() const {
	std::cout << "char: \'" << _c << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(_c) << std::endl;
	std::cout << "float: " << static_cast<float>(_c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_c) << std::endl;
}

void Convert::fromInt() const {
	std::cout << "char: ";
	if (_i < -128 || _i > 127)
		std::cout << "impossible" << std::endl;
	else if (_i < 32 || _i > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(_i) << "\'" << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << static_cast<float>(_i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_i) << std::endl;
}

void Convert::fromDouble() const {
	std::cout << "char: ";
	if (_d < -128 || _d > 127)
		std::cout << "impossible" << std::endl;
	else if (_d < 32 || _d > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(_d) << "\'" << std::endl;
	std::cout << "int: ";
	if (_d > INT_MAX || _d < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(_d) << std::endl;
	std::cout << "float: ";
	if (_d > FLT_MAX || _d < -FLT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(_d) << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
}

void Convert::fromFloat() const {
	std::cout << "char: ";
	if (_f < -128 || _f > 127)
		std::cout << "impossible" << std::endl;
	else if (_f < 32 || _f > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(_f) << "\'" << std::endl;
	std::cout << "int: ";
	if (_f > INT_MAX || _f < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(_f) << std::endl;
	std::cout << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_f) << std::endl;
}

bool Convert::checkSpecialValue() {
	if (_input == "nanf" || _input == "inff" || _input == "+inff" || _input == "-inff") {
		_type = TYPE_FLOAT;
		_input.replace(_strlen - 1, 1, "");
	}
	else if (_input == "nan" || _input == "inf" || _input == "+inf" || _input == "-inf")
		_type = TYPE_DOUBLE;
	else
		return false;
	_specialFlag = 1;
	return true;
}

bool Convert::checkValidate() {
	int i = 0;
	if (_strlen != 1 && (_input[0] == '+' || _input[0] == '-'))
		i++;
	for (;i < _strlen; i++) {
		if (_input[i] == '.') {
			_pointFlag += 1;
		}
		else if (_input[i] == 'f') {
			_fFlag += 1;
		}
		else if (_input[i] >= '0' && _input[i] <= '9')
			continue ;
		else
			return false;
	}
	return true;
}

void Convert::detectType() {
	if (!checkSpecialValue() && !detectChar()) {
		if (!checkValidate())
			throw InvalidInputException();
		if (!detectInt() && !detectFloat() && !detectDouble())
			throw InvalidInputException();
	}
}

bool Convert::detectChar() {
	if (_strlen == 1 && _input[0] >= 32 && _input[0] <= 126 && !isdigit(_input[0])) {
		_c = _input[0];
		_type = TYPE_CHAR;
		return true;
	}
	else if (_strlen == 3 && _input[0] == '\'' && _input[2] == '\'' && _input[1] >= 32 && _input[1] <= 126) {
		_c = _input[1];
		_type = TYPE_CHAR;
		return true;
	}
	else
		return false;
}

bool Convert::detectInt() {
	if (_fFlag != 0 || _pointFlag != 0)
		return false;

	this->_type = TYPE_INT;
	double temp = strtod(_input.c_str(), 0);
	if (temp < INT_MIN || temp > INT_MAX)
		throw InvalidInputException();

	this->_i = atoi(_input.c_str());
	return true;
}

bool Convert::detectFloat() {
	int	fIndex = _input.find('f');
	if (_fFlag != 1 || _pointFlag != 1 || fIndex != _strlen - 1)
		return false;

	this->_type = TYPE_FLOAT;
	float temp;
	std::stringstream iss(_input.replace(_strlen - 1, 1, ""));
	iss >> temp;
	if (iss.fail())
		throw InvalidInputException();
	
	this->_f = temp;
	return true;
}

bool Convert::detectDouble() {
	if (_fFlag != 0 || _pointFlag != 1)
		return false;
	
	this->_type = TYPE_DOUBLE;
	double temp;
	std::stringstream iss(_input);
	iss >> temp;
	if (iss.fail())
		throw InvalidInputException();

	this->_d = temp;
	return true;
}

const std::string& Convert::getInput() const {
	return _input;
}

int Convert::getType() const {
	return _type;
}

const char *Convert::InvalidInputException::what() const throw() {
	return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}

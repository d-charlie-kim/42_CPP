#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	_value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& origin) {
	std::cout << "Copy constructor called\n";
	*this = origin;
}

Fixed &Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called\n";
	this->_value = other._value;
	return *this;
}


int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

Fixed::Fixed(const int num){

}

Fixed::Fixed(const float num){

}

float Fixed::toFloat() const {

}

int Fixed::toInt() const {

}

// << operator 
#include "Fixed.hpp"

Fixed::Fixed()
: _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called\n";
	_value = num << _fractionalBits;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called\n";
	_value = roundf(num * (1 << _fractionalBits));
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
	std::cout << "setRawBits member function called\n";
	_value = raw;
}

float Fixed::toFloat() const {
	return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int Fixed::toInt() const {
	return (_value >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& oStream, const Fixed& src) {
	oStream << src.toFloat();
	return oStream;
}

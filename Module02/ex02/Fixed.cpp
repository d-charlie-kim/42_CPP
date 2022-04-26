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

/* 대입 */
Fixed &Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called\n";
	this->_value = other._value;
	return *this;
}

/* 입출력 */
std::ostream& operator<<(std::ostream& oStream, const Fixed& src) {
	oStream << src.toFloat();
	return oStream;
}

/* getter & setter */
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return _value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called\n";
	_value = raw;
}

/* toFloat & toInt */
float Fixed::toFloat() const {
	return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int Fixed::toInt() const {
	return (_value >> _fractionalBits);
}

/* 사칙연산 */
const Fixed Fixed::operator+(const Fixed& other) const {
	Fixed temp(*this);
	temp._value += other._value;
	return (temp);
}

const Fixed Fixed::operator-(const Fixed& other) const {
	Fixed temp(*this);
	temp._value -= other._value;
	return (temp);
}

const Fixed Fixed::operator*(const Fixed& other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

const Fixed Fixed::operator/(const Fixed& other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

/* 비교 연산자 */
bool Fixed::operator>(const Fixed& other) const {
	if (_value > other._value)
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed& other) const {
	if (_value < other._value)
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed& other) const {
	if (_value > other._value || _value == other._value)
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed& other) const {
	if (_value < other._value || _value == other._value)
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed& other) const {
	if (_value == other._value)
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed& other) const {
	if (_value != other._value)
		return true;
	else
		return false;
}

/* 증감 연산자*/
const Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	_value++;
	return temp;
}

const Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	_value--;
	return temp;
}

Fixed& Fixed::operator++() {
	_value++;
	return *this;
}

Fixed& Fixed::operator--() {
	_value--;
	return *this;
}

/* min max */
Fixed& Fixed::min(Fixed& first, Fixed&second) {
	if (first._value > second._value)
		return second;
	else
		return first;
}

const Fixed& Fixed::min(const Fixed& first, const Fixed&second) {
	if (first._value > second._value)
		return second;
	else
		return first;
}

Fixed& Fixed::max(Fixed& first, Fixed&second) {
	if (first._value > second._value)
		return first;
	else
		return second;
}

const Fixed& Fixed::max(const Fixed& first, const Fixed&second) {
	if (first._value > second._value)
		return first;
	else
		return second;
}

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include <ostream>

class Fixed {
	public:
	 Fixed();
	 Fixed(const int num);
	 Fixed(const float num);
	 ~Fixed();
	 Fixed(const Fixed& origin);

	 Fixed& operator=(const Fixed& other);

	 const Fixed operator+(const Fixed& other) const;
	 const Fixed operator-(const Fixed& other) const;
	 const Fixed operator*(const Fixed& other) const;
	 const Fixed operator/(const Fixed& other) const;

	 bool operator>(const Fixed& other) const;
	 bool operator<(const Fixed& other) const;
	 bool operator>=(const Fixed& other) const;
	 bool operator<=(const Fixed& other) const;
	 bool operator==(const Fixed& other) const;
	 bool operator!=(const Fixed& other) const;

	 const Fixed operator++(int);
	 const Fixed operator--(int);
	 Fixed& operator++();
	 Fixed& operator--();

	 static Fixed& min(Fixed& first, Fixed&second);
	 static const Fixed& min(const Fixed& first, const Fixed&second);
	 static Fixed& max(Fixed& first, Fixed&second);
	 static const Fixed& max(const Fixed& first, const Fixed&second);

	 int getRawBits() const;
	 void setRawBits(int const raw);

	 float toFloat() const;
	 int toInt() const;

	private:
	 int _value;
	 static const int _fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& oStream, const Fixed& src);

#endif
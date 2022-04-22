#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>

class Fixed {
	public:
	 Fixed();
	 Fixed(const int num);
	 Fixed(const float num);
	 ~Fixed();
	 Fixed(const Fixed& origin);
	 Fixed& operator=(const Fixed& other);
	 Fixed& operator<<(const Fixed& other);

	 int getRawBits() const;
	 void setRawBits(int const raw);

	 float toFloat() const;
	 int toInt() const;

	private:
	 int _value;
	 static const int _fractionalBits = 8;
};

#endif
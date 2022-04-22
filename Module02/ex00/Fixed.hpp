#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
	 Fixed();
	 ~Fixed();
	 Fixed(const Fixed& origin);
	 Fixed& operator=(const Fixed& other);

	int getRawBits() const;
	void setRawBits(int const raw);

	private:
	 int _value;
	 static const int _fractionalBits = 8;
};

#endif
#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

/*
	1. 추가된 연산에 대한 개념
	2. 다양한 main 문으로 인해 변경된 점 보여주기
	3. const를 붙이는 이유, 붙여서 ++++이 안되게 막아주는 것.
	4. 부동소수점에 대해서.
	5. 고정소수점에 대해서.
	6. 어떤 값이든(정수 / 실수) 고정소수점으로 바꿔주는 것.
*/
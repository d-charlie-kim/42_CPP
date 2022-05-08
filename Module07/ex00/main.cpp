#include "whatever.hpp"
#include <iostream>

int main( void ) {
	std::cout << "[ INT TEST ]\n";
	int a = 2;
	int b = 3;
	std::cout << "Before SWAP:\n";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "After SWAP:\n";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "\n[ STRING TEST ]\n";
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Before SWAP:\n";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "After SWAP:\n";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n[ DOUBLE TEST ]\n";
	double e = 3.3;
	double f = 10.15;
	std::cout << "Before SWAP:\n";
	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "After SWAP:\n";
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	std::cout << "\n[ CHAR TEST ]\n";
	char g = 'x';
	char h = 'f';
	std::cout << "Before SWAP:\n";
	std::cout << "g = " << g << ", h = " << h << std::endl;
	::swap(g, h);
	std::cout << "After SWAP:\n";
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

	// std::cout << "\n[ WRONG TEST ]\n";
	// int test1 = 10;
	// double test2 = 3.3;
	// ::swap(test1, test2);

	return 0;
}

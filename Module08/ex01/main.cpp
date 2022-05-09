#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include "Span.hpp"

int main(void) {
	std::cout << "[ BASIC TEST ]" << std::endl;
	try {
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(2);
		sp.addNumber(10);
		sp.addNumber(100);
		sp.addNumber(16);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n[ EXCEPTION TEST ]" << std::endl;
	try {
		Span two(3);
		two.addNumber(3);
		two.addNumber(2);
		two.addNumber(1);
		two.addNumber(0);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Span three(100);
		three.addNumber(42);
		std::cout << three.shortestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Span four(100);
		std::cout << four.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n[ BIG TEST ]" << std::endl;
	Span last = Span(30000);
	std::vector<int> temp;
	for (int i = 100; i < 30000; i += 10) {
		temp.push_back(i);
	}
	for (int i = 12345; i <= 80000; i += 5) {
		temp.push_back(i);
	}
	std::cout << "size: " << temp.size() << std::endl;
	last.addNumbers(temp.begin(), temp.end());
	std::cout << last.shortestSpan() << std::endl;
	std::cout << last.longestSpan() << std::endl;
}
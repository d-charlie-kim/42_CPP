#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "easyfind.hpp"

int main(void) {
	std::cout << "[ Vector TEST ]" << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 100; i++)
		v.push_back(i);
	try {
		std::vector<int>::iterator iter = easyfind(v, 5);
		std::cout << *iter << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "[ List TEST ]" << std::endl;
	std::list<int> l;
	for (int i = 0; i < 100; i++)
		l.push_back(i);
	try {
		std::list<int>::iterator iter = easyfind(l, 10);
		std::cout << *iter << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "[ Set TEST ]" << std::endl;
	std::multiset<int> s;
	for (int i = 0; i < 100; i++)
		s.insert(i);
	try {
		std::multiset<int>::iterator iter = easyfind(s, 15);
		std::cout << *iter << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "[ Deque TEST ]" << std::endl;
	std::deque<int> d;
	for (int i = 0; i < 100; i++)
		d.push_back(i);
	try {
		std::deque<int>::iterator iter = easyfind(d, 20);
		std::cout << *iter << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "[ INTERESTING TEST ]" << std::endl;
	try {
		l.push_back(999);
		std::list<int>::iterator iter = easyfind(l, 999);
		iter--;
		std::cout << *iter << std::endl;
		iter++;
		std::cout << *iter << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "[ WRONG ]" << std::endl;
	try {
		std::deque<int>::iterator iter = easyfind(d, 150);
		std::cout << *iter << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

}

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include "MutantStack.hpp"

int main(void) {
	std::cout << "[ NORMAL TEST ]" << std::endl;
	MutantStack<int> test;
	test.push(10);
	test.push(15);
	test.push(20);
	test.push(25);
	MutantStack<int>::iterator iter1 = test.begin();
	MutantStack<int>::iterator iter2 = test.end();
	for (; iter1 != iter2; iter1++)
		std::cout << *iter1 << std::endl;

	std::cout << "[ REVERSE TEST ]" << std::endl;
	MutantStack<std::string> sTest;
	sTest.push("HELLO");
	sTest.push("WORLD");
	sTest.push("GOOD");
	sTest.push("MORNING");
	sTest.push("GOOD");
	sTest.push("AFTERNOON");
	sTest.push("GOOD");
	sTest.push("EVENING");
	MutantStack<std::string>::reverse_iterator it1 = sTest.rbegin();
	MutantStack<std::string>::reverse_iterator it2 = sTest.rend();
	for (; it1 != it2; it1++)
		std::cout << *it1 << std::endl;

	std::cout << "[ COMPARE WITH LIST ]" << std::endl;
	std::list<double> check;
	MutantStack<double> checkStack;
	for (double i = 0; i < 6; i += 1.1) {
		check.push_back(i);
		checkStack.push(i);
	}
	std::list<double>::iterator checkitee1 = check.begin();
	std::list<double>::iterator checkitee2 = check.end();
	MutantStack<double>::iterator itee1 = checkStack.begin();
	MutantStack<double>::iterator itee2 = checkStack.end();
	for (; checkitee1 != checkitee2 && itee1 != itee2; checkitee1++, itee1++) {
		std::cout << *checkitee1 << " ::: " << *itee1;
		std::cout << std::endl;
	}

	std::cout << "\nTEST DONE\n";
	return 0;
}

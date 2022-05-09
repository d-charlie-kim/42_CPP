#include "Span.hpp"

#include <set>

Span::Span() {
	_totalSize = 0;
}

Span::~Span() {}

Span::Span(unsigned int num) {
	_totalSize = num;
}

Span::Span(const Span& origin) {
	*this = origin;
}
const std::multiset<unsigned int>& Span::getData() const {
	return _data;
}

Span& Span::operator=(const Span& other) {
	_data = other.getData();
	_totalSize = other._totalSize;
	return *this;
}

void Span::addNumber(int value) {
	if (_data.size() >= _totalSize)
		throw FullStoreException();
	_data.insert(value);
}

const char* Span::FullStoreException::what() const throw() {
	return "ERROR: Cannot Store, It's FULL";
}

const char* Span::NotEnoughException::what() const throw() {
	return "ERROR: There Is No Enough Value";
}

unsigned int Span::shortestSpan() {
	if (_data.size() <= 1)
		throw NotEnoughException();
	std::multiset<unsigned int>::reverse_iterator frontIter = ++_data.rbegin();
	std::multiset<unsigned int>::reverse_iterator backIter = _data.rbegin();
	unsigned int ret = UINT32_MAX;
	for (; frontIter != _data.rend();) {
		ret = std::min(ret, *(backIter) - *(frontIter));
		frontIter++;
		backIter++;
	}
	return ret;
}

unsigned int Span::longestSpan() {
	if (_data.size() <= 1)
		throw NotEnoughException();
	std::multiset<unsigned int>::iterator endIter = _data.end();
	std::multiset<unsigned int>::iterator beginIter = _data.begin();
	endIter--;
	unsigned int ret = *(endIter) - *(beginIter);
	return ret;
}

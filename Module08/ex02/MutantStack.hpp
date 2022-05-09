#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {
	public:
	 MutantStack()
	 : std::stack<T, C>() {}

	 ~MutantStack() {}

	 MutantStack(const MutantStack& origin) {
		 if (this != &origin)
		 	this->c = origin.c;
	 }

	 MutantStack& operator=(const MutantStack& other) {
		 if (this != &other)
		 	this->c = other.c;
		 return *this;
	 }

	 typedef typename std::stack<T>::container_type::iterator				iterator;
	 typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	 typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	 typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	 iterator begin() {
		return this->c.begin();
	 }

	 iterator end() {
		 return this->c.end();
	 }

	 const_iterator begin() const {
		return this->c.begin();
	 }

	 const_iterator end() const {
		 return this->c.end();
	 }

	 reverse_iterator rbegin() {
		return this->c.rbegin();
	 }

	 reverse_iterator rend() {
		 return this->c.rend();
	 }

	 reverse_iterator rbegin() const {
		return this->c.rbegin();
	 }

	 reverse_iterator rend()const {
		 return this->c.rend();
	 }
};

#endif
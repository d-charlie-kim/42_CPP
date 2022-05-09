#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <exception>

class Span {
	private:
	 std::multiset<unsigned int> _data;
	 unsigned int				_totalSize;

	public:
	 Span();
	 Span(unsigned int num);
	 ~Span();
	 Span(const Span& origin);
	 Span& operator=(const Span& other);

	 void addNumber(int value);

	 unsigned int shortestSpan();
	 unsigned int longestSpan();

	 const std::multiset<unsigned int>& getData() const;

	 template<typename Iter>
	 void addNumbers(Iter first, Iter last) {
		 while (first != last)
		 	addNumber(*first++);
	 }

	 class FullStoreException : public std::exception {
		const char *what() const throw();
	};

	 class NotEnoughException : public std::exception {
		const char *what() const throw();
	};
};


#endif

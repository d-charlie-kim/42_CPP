#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
	public:
	 Span();
	 Span(unsigned int num);
	 ~Span();
	 Span(const Span& origin);
	 Span& operator=(const Span& other);

	 void addNumber(int value);

	 unsigned int shortestSpan();
	 unsigned int longestSpan();
}

#endif

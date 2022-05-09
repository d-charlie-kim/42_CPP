#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int n) {
	typename T::iterator pos;
	pos = std::find(container.begin(), container.end(), n);
	if (pos == container.end()) {
		throw std::runtime_error("Not Found");
	}
	return pos;
};

#endif

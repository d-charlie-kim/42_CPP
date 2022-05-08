#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print(const T& arg) {
	std::cout << arg << std::endl;
}

template <typename T>
void iter(const T* arr, std::size_t len, void (*f)(const T&)) {
	for (std::size_t i = 0; i < len; i++) {
		f(arr[i]);
	}
}

#endif

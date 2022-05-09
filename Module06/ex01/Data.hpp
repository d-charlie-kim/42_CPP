#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

struct Data {
	std::string data1;
	std::string data2;
	int			number;
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif
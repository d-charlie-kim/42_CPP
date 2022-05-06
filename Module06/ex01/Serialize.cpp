#include "Serialize.hpp"

Serialize::Serialize() {
	_data.data1 = "hello world";
	_data.data2 = "goodbye world";
	_data.number = 100;
}

Serialize::~Serialize() {}

Serialize::Serialize(Serialize& origin) {
	*this = origin;
}

Serialize& Serialize::operator=(Serialize& other) {
	_data.data1 = other._data.data1;
	_data.data2 = other._data.data2;
	_data.number = other._data.number;
	return *this;
}

Data* Serialize::getData() {
	return &(_data);
}

uintptr_t Serialize::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serialize::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
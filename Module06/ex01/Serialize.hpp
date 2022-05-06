#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

typedef struct Data {
	std::string data1;
	std::string data2;
	int			number;
} t_Data;

class Serialize {
	private:
	 t_Data		_data;
	 
	public:
	 Serialize();
	 ~Serialize();
	 Serialize(Serialize& origin);
	 Serialize& operator=(Serialize& other);

	 Data* getData();
	 uintptr_t getRaw() const;

	 uintptr_t	serialize(Data *ptr);
	 Data*		deserialize(uintptr_t raw);
};


#endif
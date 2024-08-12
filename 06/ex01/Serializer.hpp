#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>

struct Data
{
	const int			i = 3;
	const std::string	str = " Hi\n";
};

class Serializer
{
	public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
	Serializer() = delete;
	Serializer(const Serializer& sc) = delete;
	Serializer& operator=(const Serializer& sc) = delete;
	~Serializer() = delete;
};

#endif

#include "Serializer.hpp"
#include <cstdint>

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data tmp;
	Data* 		data = &tmp;
	std::cout << "Before: " << data->i << data->str << data << '\n';
	uintptr_t	s = Serializer::serialize(data);
	std::cout << "Uintptr: " << s << '\n';
	Data*		d = Serializer::deserialize(s);
	std::cout << "After: " << d->i << d->str << d << '\n';

	if (data == d)
		std::cout << "Equal\n";
	else
		std::cout << "Wrong\n";
}

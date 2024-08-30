#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template<typename T>
class Array
{
	private:
	T*				_array;
	unsigned int	_arraySize;

	public:
	unsigned int	size() const
	{
		return (_arraySize);
	}

	Array()
	{
		_array = new T[0];
		_arraySize = 0;
	}
	Array(unsigned int n)
	{
		_array = new T[n];
		_arraySize = n;
	}
	Array(const Array& arr)
	{
		this->_array = new T[arr._arraySize];
		this->_arraySize = arr.size();
		for (unsigned int i = 0; i < this->size(); i++)
		{
			this->_array[i] = arr._array[i];
		}
	}
	Array& operator=(const Array& arr)
	{
		if (this != &arr)
		{
			delete[](this->_array);
			this->_array = new T[arr.size()];
			this->_arraySize = arr.size();
			for (unsigned int i = 0; i < this->size(); i++)
			{
				this->_array[i] = arr._array[i];
			}
		}
		return (*this);
	}
	T&	operator[](unsigned int index) const
	{
		if (index >= this->size())
			throw std::out_of_range("Index out of bounds");
		return(_array[index]);
	}
	// const T&	operator[](unsigned int index) const
	// {
	// 	if (index >= this->size())
	// 		throw std::out_of_range("Index out of bounds");
	// 	return(_array[index]);
	// }
	~Array()
	{
		delete[](_array);
	}
};

template<typename T>
std::ostream& operator<<(std::ostream&o, const Array<T>& array)
{
	for (unsigned i = 0; i < array.size(); i++)
	{
		o << array[i];
		// if ()
	}
	return (o);
}

#endif

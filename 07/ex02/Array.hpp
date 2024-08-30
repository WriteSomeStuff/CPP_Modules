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
		this->_arraySize = arr._arraySize;
		for (unsigned int i = 0; i < this->_arraySize; i++)
		{
			this->_array[i] = arr._array[i];
		}
	}
	Array& operator=(const Array& arr)
	{
		if (this != &arr)
		{
			delete[](this->_array);
			this->_array = new T[arr._arraySize];
			this->_arraySize = arr._arraySize;
			for (unsigned int i = 0; i < this->_arraySize; i++)
			{
				this->_array[i] = arr._array[i];
			}
		}
		return (*this);
	}
	T&	operator[](unsigned int index)
	{
		if (index >= _arraySize)
			throw std::out_of_range("Index out of bounds");
		return(_array[index]);
	}
	~Array()
	{
		delete[](_array);
	}
};

#endif

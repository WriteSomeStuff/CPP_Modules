#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

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
		// allocate memory for new array and fill with data
	}
	Array& operator=(const Array& arr)
	{
		if (this != &arr)
		{
			this->_array = new T[arr._arraySize];
			// fill array with data
		}
		return (*this);
	}
	T&	operator[](unsigned int index)
	{
		if (index >= _arraySize || index < 0)
			throw std::exception;
		return(_array[index]);
	}
	~Array()
	{
		delete[](_array);
	}
};

#endif

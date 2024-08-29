#ifndef ARRAY_HPP
# define ARRAY_HPP

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

	}
	Array& operator=(const Array& arr)
	{

	}
	T&	operator[](unsigned int index)
	{
		// throw exception if out of bounds
		return(_array[index]);
	}
	~Array()
	{
		delete[](_array);
	}
};

#endif

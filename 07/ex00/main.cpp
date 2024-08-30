#include "whatever.hpp"
#include <iostream>

class Test
{
	private:
	int	_i;

	public:
	Test() : _i(0)
	{
	}
	Test(int i): _i(i)
	{
	}
	int getInt() const
	{
		return (_i);
	}
};
std::ostream& operator<<(std::ostream&o, const Test& t)
{
	o << t.getInt();
	return (o);
}

int main( void )
{
	Test t1(1), t2(6);

	::swap( t1, t2 );
	std::cout << "t1 = " << t1 << ", t2 = " << t2 << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

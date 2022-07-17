#include "whatever.hpp"

int foo(int x)
{
	return (x + 10);
}

int	main( void )
{
	std::cout << "*********************TESTS SUBJECT*********************" <<  std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "*********************OTHER TEST*********************" <<  std::endl;
	char	e = 'a';
	char	j = 'b';
	double	i = 1.1;
	double	o = 4.2;
	float	k = 0.3f;
	float	p = -4.2f;
	std::cout << "e = " << e << ", j = " << j << std::endl;
	std::cout << "min( e, j ) = " << ::min( e, j ) << std::endl;
	std::cout << "max( e, j ) = " << ::max( e, j ) << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "i = " << i << ", o = " << o << std::endl;
	std::cout << "min( i, o ) = " << ::min( i, o ) << std::endl;
	std::cout << "max( i, o ) = " << ::max( i, o ) << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "k = " << k << ", p = " << p << std::endl;
	std::cout << "min( k, p ) = " << ::min( k, p ) << std::endl;
	std::cout << "max( k, p ) = " << ::max( k, p ) << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "test1 = " << foo(6) << " test2 = " << foo(42) << std::endl;
	std::cout << "min<int>(test1, test2) = " << min<int>(foo(6), foo(42)) << std::endl;
	std::cout << "max<int>(test1, test2) = " << max<int>(foo(6), foo(42)) << std::endl;

	return 0;
}

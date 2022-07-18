#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T > void iter(T *array, size_t len, void ctfct)(T &))
{
	if (array == NULL || fct == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		fct(array[i]);
}

#endif

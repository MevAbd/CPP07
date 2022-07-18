/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:39:12 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/19 00:39:14 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T > void iter(T *arr, const size_t len, void (*f)(T &))
{
	if (arr == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template< typename T > void iter(const T *arr, const size_t len, void (*f)(const T &))
{
	if (arr == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template<typename T> void	printData(const T &arg)
{
	std::cout << arg << " ";
}

#endif

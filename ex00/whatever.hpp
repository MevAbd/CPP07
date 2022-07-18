/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:37:49 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/19 00:37:51 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
template< typename T> T max(T const & x, T const & y)
{
	return ((x>y) ? x : y);
}

template< typename T> T min(T const & x, T const & y)
{
	return ((x<y) ? x : y);
}

template<typename T> void swap(T & x, T & y)
{
	T	cpy;

	cpy = x;
	x = y;
	y = cpy;
}

#endif

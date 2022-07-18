/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:15:38 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/19 00:49:37 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstdlib>

template <typename T> class Array
{
	private : 
				T				*_array;
				unsigned int	_len;
	public :
	//***********************************************************************************//
				Array(void) : _len(0)
				{
					std::cout << "Constructor called size : 0 for this array." << std::endl;
					this->_array = new T[this->_len];
				}
				Array(const unsigned int n) : _len(n)
				{
					std::cout << "Constructor called size : " << _len << " for this array." << std::endl;
					this->_array = new T[this->_len];
				}
				Array(const Array &rhs) : _len(0)
				{
					std::cout << "Copy constructor called size : " << rhs._len << " for this array." << std::endl;
					*this = rhs;
				}
	//***********************************************************************************//
				~Array(void)
				{
					std::cout << "Destructor called" << std::endl;
					if (this->_array != NULL)
						delete [] this->_array;
				}
	//***********************************************************************************//
				Array<T> &operator=(const Array<T> &rhs)
				{
					if (this->_len > 0)
						delete [] this->_array;
					if (rhs._len > 0)
					{
						this->_len = rhs._len;
						this->_array = new T[this->_len];
						for (unsigned int i = 0; i < this->_len; i++)
						this->_array[i] = rhs._array[i];
					}
					return (*this);
				}
				T	&operator[](const int i) const
				{
					if (i < 0 || static_cast<unsigned int>(i) >= _len)
						throw InvalidIndex();
					return (_array[i]);
				}
	//***********************************************************************************//
				class InvalidIndex : public std::exception
				{
					public:
							virtual const char *what() const throw()
					{
						return ("Array: index is invalid");
					}
				};
	//***********************************************************************************//
				void	size(void) const
				{
					return (this->_size);
				}
};

#endif

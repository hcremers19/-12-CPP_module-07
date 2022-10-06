/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:31:00 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/06 15:06:55 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		Array()					: _array(new T[0]),			_size(0) {}
		Array(unsigned int n)	: _array(new T[n]),			_size(n)			// The elements aren't initiated at 0 and allow an array of arrays
		{
			for (size_t i = 0; i < n; i++)
				_array[i] = T();
		}
		Array(const Array& src)	: _array(new T[src._size]),	_size(src._size)
		{
			for (size_t i = 0; i < src._size; i++)
				_array[i] = src._array[i];
		}
		~Array()	{delete [] _array;}

		const Array&		operator=(const Array& rhs)
		{
			_size = rhs._size;

			delete [] _array;
			_array = new T[rhs._size];											// Deep copy

			for(size_t i = 0; i < rhs._size; i++)
				_array[i] = rhs._array[i];

			return (*this);
		}

		T&					operator[](size_t i)
		{
			if (i >= _size || i < 0)
				throw (IndexErrorException());
			return (_array[i]);
		}

		size_t				size() const {return (_size);}

		class IndexErrorException : public std::exception
		{
			public:
				const char*	what() const throw()	{return ("Index error");}
		};

	private:
		T*		_array;
		size_t	_size;
};

#endif
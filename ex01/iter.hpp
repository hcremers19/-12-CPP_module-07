/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:22:40 by hcremers          #+#    #+#             */
/*   Updated: 2022/11/09 11:47:16 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

# include <iostream>
# include <string>

template<typename T, typename U>
void	iter(T* array, U size, void (*f)(const T&))
{
	for (U i = 0; i < size; i++)
		(*f)(array[i]);
}

template<typename T>
void	printer(const T& x)
{
	std::cout << x << std::endl;
	return;
}

#endif
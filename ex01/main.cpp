/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:22:09 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/04 17:27:28 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::string*	str = new std::string[5];

	str[0] = "Some";
	str[1] = "body once told me";
	str[2] = "the world";
	str[3] = "is gonna roll me";
	str[4] = "I ain't the sharpest tool in the shed";

	iter(str, 5, printer);

	delete[] str;

	std::cout << std::endl;

	int				tab[] = {0, 1, 2, 3, 4};
	size_t			size = 5;

	iter(tab, size, printer);

	return (0);
}

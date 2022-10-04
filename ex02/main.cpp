/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:29:16 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/03 13:35:56 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{

	Array<int>	a;
	Array<int>	b(3);

	for (size_t i = 0; i < b.size(); i++)
		b[i] = (i + 1) * 2;

	Array<int>	c(b);

	std::cout << b[0] << std::endl;
	std::cout << b[1] << std::endl;
	std::cout << b[2] << std::endl << std::endl;

	std::cout << c[0] << std::endl;
	std::cout << c[1] << std::endl;
	std::cout << c[2] << std::endl << std::endl;

	try
	{
		a[0] = 1;
		std::cout << a[0] << std::endl << std::endl;

		a[1] = 2;
		std::cout << a[1] << std::endl << std::endl;
	}
	catch(const Array<int>::IndexErrorException& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Array<std::string>	d(3);

	d[0] = "This";
	d[1] = "is";
	d[2] = "SPARTA";
	for (size_t i = 0; i < d.size(); i++)
		std::cout << d[i] << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:13:13 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 15:32:09 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j] != '\0'; j++)
				av[i][j] = toupper(av[i][j]);
		}
		for (i = 1; i < ac; i++)
		{
			std::cout << av[i];
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
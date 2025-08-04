/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:02:13 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 15:37:36 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	chadHorde = zombieHorde(10, "Chad");
	for (int i = 0; i < 10; i++){
		chadHorde[i].announce();
	}
	delete[] chadHorde;

	Zombie*	isaacHorde = zombieHorde(1, "Isaac");
	isaacHorde->announce();
	delete[] isaacHorde;

	Zombie*	bogusHorde = zombieHorde(40, "Bogus");
	for (int i = 0; i < 40; i++){
		bogusHorde[i].announce();
	}
	delete[] bogusHorde;
}

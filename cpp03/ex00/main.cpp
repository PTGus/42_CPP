/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:35 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 15:50:39 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	freddy("fiveBear");
	ClapTrap	foxxy("pirate");

	freddy.attack("purple guy");
	freddy.beRepaired(42);
	freddy.attack("pirate");
	foxxy.takeDamage(0);
	for (int i = 0; i < 10; i++)
		foxxy.attack("Chica");
	foxxy.attack("Bonnie");
	foxxy.beRepaired(123);
}

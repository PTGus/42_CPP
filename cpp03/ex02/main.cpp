/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:35 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 17:09:55 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	freddy("fiveBear");
	ScavTrap	foxxy("pirate");

	freddy.attack("purple guy");
	freddy.beRepaired(42);
	freddy.attack("pirate");
	foxxy.takeDamage(99);
	foxxy.attack("Chica");
	foxxy.attack("Bonnie");
	foxxy.takeDamage(1);
	foxxy.takeDamage(99);
}

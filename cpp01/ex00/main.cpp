/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:11:13 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 14:38:46 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	bob = newZombie("Bob");
	bob->announce();
	randomChump("Theo");
	Zombie*	bart = newZombie("Bart");
	bob->announce();
	bart->announce();
	delete(bart);
	bob->announce();
	delete(bob);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:45:19 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 15:08:00 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	hordeLeader = new Zombie[N];

	for (int i = 0; i < N; i++) {
		hordeLeader[i].setName(name);
	}
	return (hordeLeader);
}

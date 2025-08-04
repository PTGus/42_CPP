/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:00:01 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 15:01:59 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:

	std::string	name;


public:

	Zombie();
	~Zombie();

	void	announce(void);
	void	setName(std::string name);


};

Zombie*	zombieHorde(int N, std::string name);

#endif

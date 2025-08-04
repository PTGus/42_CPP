/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:00:01 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 14:34:34 by gumendes         ###   ########.fr       */
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

	Zombie(std::string name);
	~Zombie();

	void	announce(void);

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif

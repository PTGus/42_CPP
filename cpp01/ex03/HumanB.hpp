/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:56:01 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 17:04:55 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:

	std::string	name;
	Weapon*		weapon;


public:

	HumanB(std::string newName);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& weapon);


};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:56:07 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 16:50:22 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:

	std::string	name;
	Weapon&		weapon;


public:

	HumanA(std::string newName, Weapon& newWeapon);
	~HumanA();

	void	attack();


};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:55:55 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 17:06:18 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:

	std::string	type;


public:

	Weapon(std::string newType);
	~Weapon();

	const std::string& getType() const;
	void	setType(std::string type);


};

#endif

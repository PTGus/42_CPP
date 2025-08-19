/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:55:19 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 17:20:24 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

private:


	std::string	name;

public:


	// Constructors //
	DiamondTrap(std::string newName);
	DiamondTrap(const DiamondTrap& toCopy);

	// Deconstructors //
	~DiamondTrap();

	// Copy assignment overload //
	DiamondTrap& operator=(const DiamondTrap& toCopy);

	// Public methods //
	void	attack(const std::string& target);
	void	whoAmI();

};

#endif

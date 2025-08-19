/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:57:38 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 17:15:11 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

private:


	bool	guardingGate;

public:


	// Constructors //
	ScavTrap();
	ScavTrap(std::string newName);
	ScavTrap(const ScavTrap& toCopy);

	// Deconstructors //
	~ScavTrap();

	// Copy assignment overload //
	ScavTrap& operator=(const ScavTrap& toCopy);

	// Public methods //
	void	guardGate();
	void	attack(const std::string& target);

};

#endif

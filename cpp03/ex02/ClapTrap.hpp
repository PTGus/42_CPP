/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:12:50 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 14:09:09 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

protected:


	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

public:

// Constructors //
	ClapTrap();
	ClapTrap(std::string newName);
	ClapTrap(const ClapTrap& toCopy);

// Deconstructors //
	~ClapTrap();

// Copy assignment overload //
	ClapTrap& operator=(const ClapTrap& toCopy);

// Public methods //
	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif

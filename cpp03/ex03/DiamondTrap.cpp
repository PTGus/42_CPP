/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:55:07 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 10:32:33 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string newName)
    : ClapTrap(newName + "_clap_name"), ScavTrap(newName + "_clap_name"), FragTrap(newName + "_clap_name"), name(newName)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy)
	: ClapTrap(toCopy.name + "_clap_name"), ScavTrap(toCopy.name + "_clap_name"), FragTrap(toCopy.name + "_clap_name"), name(toCopy.name)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "ClapTrap Default Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& toCopy)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &toCopy)
	{
		this->name = toCopy.name;
		this->hitPoints = toCopy.hitPoints;
		this->energyPoints = toCopy.energyPoints;
		this->attackDamage = toCopy.attackDamage;
		this->guardingGate = toCopy.guardingGate;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Hello I am DiamondTrap model " << this->name
              << " but my friends call me " << ClapTrap::name << "!"
              << std::endl;
}

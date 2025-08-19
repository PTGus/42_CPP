/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:11:37 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 16:38:24 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	name = newName;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default deconstructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& toCopy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
}


FragTrap& FragTrap::operator=(const FragTrap& toCopy)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &toCopy)
	{
		this->name = toCopy.name;
		this->hitPoints = toCopy.hitPoints;
		this->energyPoints = toCopy.energyPoints;
		this->attackDamage = toCopy.attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " raises his hand for a high-five!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else if (energyPoints <= 0)
		std::cout << "FragTrap " << name << " has exausted all his energy and can't attack." << std::endl;
	else if (hitPoints <= 0)
		std::cout << "FragTrap " << name << " has died hence he can't repair himself." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:23:14 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 17:12:41 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName)
{
	std::cout << "ClapTrap Named constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Default deconstructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& toCopy)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &toCopy)
	{
		this->name = toCopy.name;
		this->hitPoints = toCopy.hitPoints;
		this->energyPoints = toCopy.energyPoints;
		this->attackDamage = toCopy.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " has exausted all his energy and can't attack." << std::endl;
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " has died hence he can't repair himself." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0) {
		std::cout << name << " has been attacked receving " << amount << " points of damage!" << std::endl;
		hitPoints -= amount;
	}
	else
		std::cout << name << " has already died." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << name << " is repairing himself for " << amount << " hit points!" << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
	else if (energyPoints <= 0)
		std::cout << name << " has exausted all his energy and can't repair himself." << std::endl;
	else if (hitPoints <= 0)
		std::cout << name << " has died hence he can't repair himself." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:07:50 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 10:00:34 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newName)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	name = newName;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	guardingGate = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& toCopy)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
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

void	ScavTrap::guardGate()
{
	if (guardingGate == true)
	{
		std::cout << name << " is no longer guarding the gate!" << std::endl;
		guardingGate = false;
	}
	else
	{
		std::cout << name << " is now guarding the gate!" << std::endl;
		guardingGate = true;
	}
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else if (energyPoints <= 0)
		std::cout << "ScavTrap " << name << " has exausted all his energy and can't attack." << std::endl;
	else if (hitPoints <= 0)
		std::cout << "ScavTrap " << name << " has died hence he can't repair himself." << std::endl;
}

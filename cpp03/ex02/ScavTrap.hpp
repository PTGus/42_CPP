/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:57:38 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 16:58:15 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

private:


	bool	guardingGate;

public:


	ScavTrap(std::string newName);
	~ScavTrap();
	ScavTrap(const ScavTrap& toCopy);

	ScavTrap& operator=(const ScavTrap& toCopy);

	void	guardGate();
	void	attack(const std::string& target);

};

#endif

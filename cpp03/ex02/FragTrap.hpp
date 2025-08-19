/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:11:44 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 17:03:15 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	// Constructors //
	FragTrap(std::string newName);
	FragTrap(const FragTrap& toCopy);

	// Deconstructors //
	~FragTrap();

	// Copy assignment overload //
	FragTrap& operator=(const FragTrap& toCopy);

	// Public methods //
	void	highFivesGuys(void);
	void	attack(const std::string& target);

};

#endif

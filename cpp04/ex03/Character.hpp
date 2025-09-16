/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:42:21 by gumendes          #+#    #+#             */
/*   Updated: 2025/09/08 14:29:27 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{

private:


	std::string	_name;
	AMateria	*_spells[4];

public:


// Constructors //
	Character(const std::string& newName);
	Character(const Character& toCopy);

// Destructors //
	~Character();

// Copy Assignment Overload //
	Character& operator=(const Character& toCopy);

// Interface Methods //
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

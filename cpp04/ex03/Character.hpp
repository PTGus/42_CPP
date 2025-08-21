/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:42:21 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 14:59:46 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter
{

public:


	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

};

class Character : public ICharacter
{

private:

	std::string	_name;
	Materia	_spells[4];

public:


// Constructors //
	Character(const std::string& newName);
	Character(const Character& toCopy);

// Destructors //
	~Character();

// Copy Assignment Overload //
	Character& operator=(const Character& toCopy);

// Public Methods //
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

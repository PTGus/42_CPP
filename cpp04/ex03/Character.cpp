/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:49:54 by gumendes          #+#    #+#             */
/*   Updated: 2025/09/08 14:28:52 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& newName): _name(newName)
{
	for (size_t i = 0; i < 4; i++) {
		_spells[i] = NULL;
	}
}

Character::Character(const Character& toCopy)
{
	// std::cout << "Character Copy Constructor called for spell type: " << toCopy._type << std::endl;
	for (int i = 0; i < 4; i++)
		_spells[i] = NULL;
	*this = toCopy;
}

Character::~Character()
{
	// std::cout << "Character Default Destructor" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		if (this->_spells[i])
			delete this->_spells[i];
	}
}

Character& Character::operator=(const Character& toCopy)
{
	if (this != &toCopy) {
		this->_name = toCopy._name;
		for (size_t i = 0; i < 4; i++) {

			if (this->_spells[i])
				delete this->_spells[i];

			if (toCopy._spells[i])
				this->_spells[i] = toCopy._spells[i]->clone();
			else
                this->_spells[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* m)
{
	static int	oldest = 0;
	size_t		i = 0;

	while (i < 4 && this->_spells[i] != NULL)
		i++;
	if (i == 4) {
		std::cout << this->getName() << " has no spell slotsa vailable." << std::endl;
		return ;
	}
	else {
		this->_spells[i] = m;
		std::cout << this->getName() << " has equiped a " << m->getType() << " spell on the slot number " << i << "." << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_spells[idx]) {
		std::cout << _name << " has nothing to unequip at slot " << idx << std::endl;
		return ;
	}
	std::cout << _name << " unequipped " << _spells[idx]->getType()
	          << " from slot " << idx << std::endl;
	_spells[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_spells[idx]) {
		std::cout << _name << " has no spell equipped at slot " << idx << std::endl;
		return ;
	}
	_spells[idx]->use(target);
}

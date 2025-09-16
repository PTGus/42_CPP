/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:56:54 by gumendes          #+#    #+#             */
/*   Updated: 2025/09/08 14:25:44 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("Unknown")
{
	// std::cout << "AMateria Default Constructor called << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
	// std::cout << "AMateria Default Constructor called for spell type: " << type << std::endl;
}

AMateria::AMateria(const AMateria& toCopy)
{
	// std::cout << "AMateria Copy Constructor called for spell type: " << toCopy._type << std::endl;
	*this = toCopy;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Default Destructor called for spell type: " << _type << std::endl;
}

AMateria& AMateria::operator=(const AMateria& toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

const std::string& AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "* generic magical effect happens *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:56:54 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 15:24:22 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(const std::string& type) : _type("type")
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
	// std::cout << "AMateria Default Destructor called for spell type: " << type << std::endl;
}

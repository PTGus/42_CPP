/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:27:27 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/22 13:04:46 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:


	std::string	_type;

public:

	// Constructors //
	AMateria(const std::string& type);
	AMateria(const AMateria& toCopy);

	// Destructors //
	virtual ~AMateria();

	// Copy assignment overload //
	AMateria& operator=(const AMateria& toCopy);

	// Public Methods //
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

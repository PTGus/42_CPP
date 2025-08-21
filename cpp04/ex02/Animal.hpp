/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:36:27 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 14:21:47 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{

protected:


	std::string	_type;

public:

	// Constructors //
	Animal();
	Animal(const Animal& toCopy);

	// Destructors //
	virtual ~Animal();

	// Copy assignment overload //
	Animal& operator=(const Animal& toCopy);

	// Public Methods //
	virtual void	makeSound(void) const = 0;
	std::string		getType() const;

};

class WrongAnimal
{

protected:


	std::string	_type;

public:

	// Constructors //
	WrongAnimal();
	WrongAnimal(const WrongAnimal& toCopy);

	// Destructors //
	~WrongAnimal();

	// Copy assignment overload //
	WrongAnimal& operator=(const WrongAnimal& toCopy);

	// Public Methods //
	void	makeSound(void) const;
	std::string		getType() const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:14:09 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 12:38:44 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{

public:


	// Constructors //
	Cat();
	Cat(const Cat& toCopy);

	// Destructors //
	~Cat();

	// Copy assignment overload //
	Cat& operator=(const Cat& toCopy);

	// Public Methods //
	void	makeSound(void) const;

};

class WrongCat : public WrongAnimal
{

public:


	// Constructors //
	WrongCat();
	WrongCat(const WrongCat& toCopy);

	// Destructors //
	~WrongCat();

	// Copy assignment overload //
	WrongCat& operator=(const WrongCat& toCopy);

	// Public Methods //
	void	makeSound(void) const;

};

#endif

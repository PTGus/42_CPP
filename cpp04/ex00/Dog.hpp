/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:57:33 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 12:32:58 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{

public:


	// Constructors //
	Dog();
	Dog(const Dog& toCopy);

	// Destructors //
	~Dog();

	// Copy assignment overload //
	Dog& operator=(const Dog& toCopy);

	// Public Methods //
	void	makeSound(void) const;

};

#endif

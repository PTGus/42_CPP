/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:57:33 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 14:07:04 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:


	Brain*	brain;

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

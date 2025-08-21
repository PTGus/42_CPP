/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:59:21 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 14:07:37 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(const Dog& toCopy)
{
	std::cout << "Dog Copy Contructor called." << std::endl;
	brain = toCopy.brain;
	*this = toCopy;
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor called." << std::endl;
	delete(brain);
}

Dog& Dog::operator=(const Dog& toCopy)
{
	std::cout << "Dog Copy Assignment Operator called copying the instance type: " << toCopy._type << "." << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}

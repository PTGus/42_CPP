/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:41:43 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 12:41:49 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "genericAnimal";
	std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal(const Animal& toCopy)
{
	std::cout << "Animal Copy Contructor called, copying the instance with type: " << toCopy._type << "." << std::endl;
	*this = toCopy;
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor called with the type: " << _type << " called." << std::endl;
}

Animal& Animal::operator=(const Animal& toCopy)
{
	std::cout << "Animal Copy Assignment Operator called copying the instance type: " << toCopy._type << "." << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Generic animal noises." << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

//----------------------------------------------------------------------------------------------------------------------------------//

WrongAnimal::WrongAnimal()
{
	_type = "genericWrongAnimal";
	std::cout << "WrongAnimal Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	std::cout << "WrongAnimal Copy Contructor called, copying the instance with type: " << toCopy._type << "." << std::endl;
	*this = toCopy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor called with the type: " << _type << " called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& toCopy)
{
	std::cout << "WrongAnimal Copy Assignment Operator called copying the instance type: " << toCopy._type << "." << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Generic WrongAnimal noises." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

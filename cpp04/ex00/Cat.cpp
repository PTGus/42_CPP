/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:15:06 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 12:40:34 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "cat";
	std::cout << "Cat Default Constructor called." << std::endl;
}

Cat::Cat(const Cat& toCopy)
{
	std::cout << "Cat Copy Contructor called." << std::endl;
	*this = toCopy;
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& toCopy)
{
	std::cout << "Cat Copy Assignment Operator called copying the instance type: " << toCopy._type << "." << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

//----------------------------------------------------------------------------------------------------------------------------------//

WrongCat::WrongCat()
{
	_type = "wrongCat";
	std::cout << "WrongCat Default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& toCopy)
{
	std::cout << "WrongCat Copy Contructor called." << std::endl;
	*this = toCopy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& toCopy)
{
	std::cout << "WrongCat Copy Assignment Operator called copying the instance type: " << toCopy._type << "." << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Purr Purr" << std::endl;
}

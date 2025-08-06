/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:26:40 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 16:11:51 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& toCopy)
{
	rawBits = toCopy.rawBits;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& toCopy)
{
	if (this != &toCopy)
		rawBits = toCopy.rawBits;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	rawBits = raw * (1 << fractionalBits);
	std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	int	ret = rawBits / (1 << fractionalBits);
	std::cout << "getRawBits member function called" << std::endl;
	return (ret);
}

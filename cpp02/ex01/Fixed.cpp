/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:26:40 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 16:54:26 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

/**
 * @brief Default constructor. Initializes the fixed-point value to 0.
 */
Fixed::Fixed()
{
	rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}


/**
 * @brief Copy constructor. Initializes the fixed-point value by copying another instance.
 */
Fixed::Fixed(const Fixed& toCopy)
{
	rawBits = toCopy.rawBits;
	std::cout << "Copy constructor called" << std::endl;
}


/**
 * @brief Integer constructor. Converts an integer to fixed-point format.
 */
Fixed::Fixed(const int rawValue)
{
	rawBits = rawValue * (1 << fractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

/**
 * @brief Float constructor. Converts a float to fixed-point format using rounding.
 */
Fixed::Fixed(const float rawValue)
{
	rawBits = roundf(rawValue * (1 << fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}


/**
 * @brief Destructor. Cleans up the instance when it goes out of scope.
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/**
 * @brief Copy assignment operator. Assigns the value from another Fixed instance.
 */
Fixed& Fixed::operator=(const Fixed& toCopy)
{
	if (this != &toCopy)
		rawBits = toCopy.rawBits;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}


/**
 * @brief Converts the fixed-point value to a float.
 * @return The float representation.
 */
float	Fixed::toFloat(void) const
{
	float	ret = static_cast<float>(rawBits) / (1 << fractionalBits);
	return (ret);
}

/**
 * @brief Converts the fixed-point value to an integer.
 * @return The integer representation.
 */
int	Fixed::toInt(void) const
{
	int	ret = rawBits / (1 << fractionalBits);
	return (ret);
}

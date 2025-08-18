/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:26:40 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 14:05:59 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

const int	Fixed::fractionalBits = 8;

// CONTRUCTORS //

/**
 * @brief Default constructor. Initializes the fixed-point value to 0.
 */
Fixed::Fixed()
{
	rawBits = 0;
	// std::cout << "Fixed Default constructor called" << std::endl;
}


/**
 * @brief Copy constructor. Initializes the fixed-point value by copying another instance.
 */
Fixed::Fixed(const Fixed& toCopy)
{
	rawBits = toCopy.rawBits;
	// std::cout << "Fixed Copy constructor called" << std::endl;
}


/**
 * @brief Integer constructor. Converts an integer to fixed-point format.
 */
Fixed::Fixed(const int rawValue)
{
	rawBits = rawValue * (1 << fractionalBits);
	// std::cout << "Fixed Int constructor called" << std::endl;
}

/**
 * @brief Float constructor. Converts a float to fixed-point format using rounding.
 */
Fixed::Fixed(const float rawValue)
{
	rawBits = roundf(rawValue * (1 << fractionalBits));
	// std::cout << "Fixed Float constructor called" << std::endl;
}

//----------------------------------------------------------------------------------------//

// DESTRUCTOR //

/**
 * @brief Destructor. Cleans up the instance when it goes out of scope.
 */
Fixed::~Fixed()
{
	// std::cout << "Fixed Destructor called" << std::endl;
}

//----------------------------------------------------------------------------------------//

// OPERATOR OVERLOADS //

/**
 * @brief Copy assignment operator. Assigns the value from another Fixed instance.
 */
Fixed& Fixed::operator=(const Fixed& toCopy)
{
	if (this != &toCopy)
		rawBits = toCopy.rawBits;
	// std::cout << "Fixed Copy assignment operator called" << std::endl;
	return (*this);
}

/**
 * @brief Checks if this Fixed is equal to the compared one.
 *
 * @param toCompare The Fixed to compare with.
 * @return true if this is equal to toCompare, false otherwise.
 */
bool Fixed::operator==(const Fixed& toCompare) const
{
	if (this->toFloat() == toCompare.toFloat())
		return (true);
	return (false);
}

/**
 * @brief Checks if this Fixed is not equal to the compared one.
 *
 * @param toCompare The Fixed to compare with.
 * @return true if this is not equal to toCompare, false otherwise.
 */
bool Fixed::operator!=(const Fixed& toCompare) const
{
	if (this->toFloat() != toCompare.toFloat())
		return (true);
	return (false);
}

/**
 * @brief Checks if this Fixed is greater than the compared one.
 *
 * @param toCompare The Fixed to compare with.
 * @return true if this is greater than toCompare, false otherwise.
 */
bool Fixed::operator>(const Fixed& toCompare) const
{
	if (this->toFloat() > toCompare.toFloat())
		return (true);
	return (false);
}

/**
 * @brief Checks if this Fixed is greater than or equal to the compared one.
 *
 * @param toCompare The Fixed to compare with.
 * @return true if this is greater than or equal to toCompare, false otherwise.
 */
bool Fixed::operator>=(const Fixed& toCompare) const
{
	if (this->toFloat() >= toCompare.toFloat())
		return (true);
	return (false);
}

/**
 * @brief Checks if this Fixed is less than the compared one.
 *
 * @param toCompare The Fixed to compare with.
 * @return true if this is less than toCompare, false otherwise.
 */
bool Fixed::operator<(const Fixed& toCompare) const
{
	if (this->toFloat() < toCompare.toFloat())
		return (true);
	return (false);
}

/**
 * @brief Checks if this Fixed is less than or equal to the compared one.
 *
 * @param toCompare The Fixed to compare with.
 * @return true if this is less than or equal to toCompare, false otherwise.
 */
bool Fixed::operator<=(const Fixed& toCompare) const
{
	if (this->toFloat() <= toCompare.toFloat())
		return (true);
	return (false);
}

/**
 * @brief Adds two Fixed numbers and returns the result as a float.
 *
 * @param toAdd The Fixed number to add.
 * @return The sum of the two Fixed numbers as a float.
 */
float	Fixed::operator+(const Fixed& toAdd) const
{
	return (this->toFloat() + toAdd.toFloat());
}

/**
 * @brief Subtracts one Fixed number from another and returns the result as a float.
 *
 * @param toSubtract The Fixed number to subtract.
 * @return The difference between the two Fixed numbers as a float.
 */
float	Fixed::operator-(const Fixed& toSubtract) const
{
	return (this->toFloat() - toSubtract.toFloat());
}

/**
 * @brief Multiplies two Fixed numbers and returns the result as a float.
 *
 * @param toMultiply The Fixed number to multiply with.
 * @return The product of the two Fixed numbers as a float.
 */
float	Fixed::operator*(const Fixed& toMultiply) const
{
	return (this->toFloat() * toMultiply.toFloat());
}

/**
 * @brief Divides this Fixed number by another and returns the result as a float.
 *
 * @param toDivide The Fixed number to divide by.
 * @return The quotient of the two Fixed numbers as a float.
 */
float	Fixed::operator/(const Fixed& toDivide) const
{
	return (this->toFloat() / toDivide.toFloat());
}

/**
 * @brief Pre-increment operator. Increases the fixed-point value by the smallest step.
 * @return Reference to the incremented object.
 */
Fixed&	Fixed::operator++(void)
{
	this->rawBits++;
	return (*this);
}

/**
 * @brief Post-increment operator. Increases the fixed-point value by the smallest step, 
 *        but returns the original value before increment.
 * @return Copy of the object before increment.
 */
Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->rawBits++;
	return (temp);
}

/**
 * @brief Pre-decrement operator. Decreases the fixed-point value by the smallest step.
 * @return Reference to the decremented object.
 */
Fixed&	Fixed::operator--(void)
{
	this->rawBits--;
	return (*this);
}

/**
 * @brief Post-decrement operator. Decreases the fixed-point value by the smallest step, 
 *        but returns the original value before decrement.
 * @return Copy of the object before decrement.
 */
Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	this->rawBits--;
	return (temp);
}

//----------------------------------------------------------------------------------------//

// MEMBER FUNCTIONS //

/**
 * @brief Returns the smaller of two Fixed objects (non-const version).
 */
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}


/**
 * @brief Returns the smaller of two Fixed objects (const version).
 */
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}


/**
 * @brief Returns the larger of two Fixed objects (non-const version).
 */
Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * @brief Returns the larger of two Fixed objects (const version).
 */
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

//----------------------------------------------------------------------------------------//

// GETERS //

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

//----------------------------------------------------------------------------------------//

// STREAM OVERLOAD //

/**
 * @brief Stream insertion operator overload for Fixed.
 *        Outputs the fixed-point value as a float to the given ostream.
 *
 * @param os The output stream.
 * @param fixed The Fixed object to output.
 * @return Reference to the output stream.
 */
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}

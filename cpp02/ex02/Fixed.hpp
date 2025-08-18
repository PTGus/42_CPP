/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:06:03 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 14:06:44 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:

	int					rawBits;
	static const int	fractionalBits;


public:

	Fixed();
	~Fixed();
	Fixed(const Fixed& toCopy);

	Fixed& operator=(const Fixed& toCopy);

	bool	operator==(const Fixed& toCompare) const;
	bool	operator!=(const Fixed& toCompare) const;
	bool	operator>(const Fixed& toCompare) const;
	bool	operator>=(const Fixed& toCompare) const;
	bool	operator<(const Fixed& toCompare) const;
	bool	operator<=(const Fixed& toCompare) const;

	float	operator+(const Fixed& toAdd) const;
	float	operator-(const Fixed& toSubtract) const;
	float	operator*(const Fixed& toMultiply) const;
	float	operator/(const Fixed& toDivide) const;

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	Fixed(const int rawValue);
	Fixed(const float rawValue);

	float	toFloat(void) const;
	int		toInt(void) const;

	static			Fixed&	min(Fixed& a, Fixed& b);
	static const	Fixed&	min(const Fixed& a, const Fixed& b);
	static			Fixed&	max(Fixed& a, Fixed& b);
	static const	Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif

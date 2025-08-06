/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:06:03 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 16:56:48 by gumendes         ###   ########.fr       */
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

	Fixed(const int rawValue);
	Fixed(const float rawValue);

	float	toFloat(void) const;
	int		toInt(void) const;
};

inline std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

#endif

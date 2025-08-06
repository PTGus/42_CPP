/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:06:03 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 16:11:54 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int				rawBits;
	static const int fractionalBits;


public:

	Fixed();
	~Fixed();
	Fixed(const Fixed& toCopy);
	Fixed& operator=(const Fixed& toCopy);

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

#endif

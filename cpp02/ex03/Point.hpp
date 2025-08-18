/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:20:58 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 12:27:14 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:

	const Fixed	x;
	const Fixed	y;


public:

	Point();
	~Point();
	Point(float x, float y);
	Point(const Point& toCopy);

	Point& operator=(const Point& toCopy) = delete;

	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;
};

// Ostream overload

std::ostream &operator<<(std::ostream &o, const Point& point);

#endif

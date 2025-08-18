/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:20:52 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 12:26:38 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	// std::cout << "Point Default constructor called" << std::endl;
}

Point::~Point()
{
	// std::cout << "Point Copy constructor called" << std::endl;
}

Point::Point(float xVal, float yVal) : x(xVal), y(yVal)
{
}

Point::Point(const Point& toCopy) : x(toCopy.x), y(toCopy.y)
{
}

Point &Point::operator=(const Point &src)
{
	// std::cout << "Point = Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

const Fixed&	Point::getX(void) const
{
	return (x);
}

const Fixed&	Point::getY(void) const
{
	return (y);
}

std::ostream &operator<<(std::ostream &os, const Point& point)
{
    os << "x: " << point.getX() << " | y: " << point.getY();
    return os;
}

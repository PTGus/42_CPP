/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:20:52 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 14:20:00 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// CONTRUCTORS & DESTRUCTORS//

/**
 * @brief Default constructor. Initializes the point at the origin (0, 0).
 */
Point::Point() : x(0), y(0)
{
	// std::cout << "Point Default constructor called" << std::endl;
}

/**
 * @brief Destructor. Cleans up the Point instance.
 */
Point::~Point()
{
	// std::cout << "Point Copy constructor called" << std::endl;
}


/**
 * @brief Parameterized constructor. Initializes the point with given coordinates.
 * @param xVal X-coordinate as a float.
 * @param yVal Y-coordinate as a float.
 */
Point::Point(float xVal, float yVal) : x(xVal), y(yVal)
{
}

/**
 * @brief Copy constructor. Initializes a new point with the values of another point.
 * @param toCopy The point to copy from.
 */
Point::Point(const Point& toCopy) : x(toCopy.x), y(toCopy.y)
{
}

//----------------------------------------------------------------------------------------//

// OPERATOR OVERLOADS //

/**
 * @brief Copy assignment operator is deleted since Point has const members.
 * @param src Source point to assign from.
 * @return Reference to the current point (unused in practice due to deletion).
 */
Point &Point::operator=(const Point &src)
{
	// std::cout << "Point = Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

//----------------------------------------------------------------------------------------//

// GETERS //

/**
 * @brief Getter for the X-coordinate.
 * @return Reference to the X Fixed value.
 */
const Fixed&	Point::getX(void) const
{
	return (x);
}

/**
 * @brief Getter for the Y-coordinate.
 * @return Reference to the Y Fixed value.
 */
const Fixed&	Point::getY(void) const
{
	return (y);
}

//----------------------------------------------------------------------------------------//

// STREAM OVERLOAD //

/**
 * @brief Stream insertion operator for Point.
 *        Prints the point coordinates in the format: "x: value | y: value".
 * @param os The output stream.
 * @param point The point to output.
 * @return Reference to the output stream.
 */
std::ostream &operator<<(std::ostream &os, const Point& point)
{
    os << "x: " << point.getX() << " | y: " << point.getY();
    return os;
}

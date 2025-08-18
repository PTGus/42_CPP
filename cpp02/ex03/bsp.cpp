/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:38:17 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 14:03:36 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//In accordance to the shoelace formula the area of any triangle = [x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2

/**
 * @brief Calculates the absolute area of a triangle defined by three points following the shoelace formula.
 *
 * @param p1 First vertex of the triangle.
 * @param p2 Second vertex of the triangle.
 * @param p3 Third vertex of the triangle.
 *
 * @return The area of the triangle as a float.
 */
static float	areaCalculator(const Point& point1, const Point& point2, const Point& point3)
{
	float	area;

	area = ((point1.getX().toFloat() * (point2.getY().toFloat() - point3.getY().toFloat()))
			+ (point2.getX().toFloat() * (point3.getY().toFloat() - point1.getY().toFloat()))
			+ (point3.getX().toFloat() * (point1.getY().toFloat() - point2.getY().toFloat())))
			/ 2;
	if (area >= 0)
		return (area);
	return (area * -1);
}

/**
 * @brief Determines if a point lies strictly inside a triangle.
 *
 * @param a First vertex of the triangle.
 * @param b Second vertex of the triangle.
 * @param c Third vertex of the triangle.
 * @param point The point to test.
 *
 * @return true if the point is inside the triangle, false otherwise.
 */
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	areaABC, areaPAB, areaPAC, areaPBC;

	areaABC = areaCalculator(a, b, c);
	areaPAB = areaCalculator(point, a, b);
	areaPAC = areaCalculator(point, a, c);
	areaPBC = areaCalculator(point, b, c);

	// Check if the point is in any of he edges or in a vertex
	if (areaPAB == 0 || areaPAC == 0 || areaPBC == 0)
		return (false);

	// If sums of the the areas of the triangles with a veritce in point is = to the main triangle the point is inside the triangle
	if (areaPAB + areaPAC + areaPBC == areaABC)
		return (true);

	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:38:31 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 14:37:19 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	// Define triangle vertices
	Point p1 = Point();
	Point p2(5.0, 0.0);
	Point p3(0.0, 5.0);

	// Points to test
	Point inside(1.0, 1.0);
	Point outside(6.0, 6.0);
	Point onEdge(0.0, 2.0);

	std::cout << "Triangle vertices:\n";
	std::cout << "p1: " << p1 << "\n";
	std::cout << "p2: " << p2 << "\n";
	std::cout << "p3: " << p3 << "\n\n";

	std::cout << "Testing bsp function:\n";
	std::cout << "Inside point (1,1): " << bsp(p1, p2, p3, inside) << " (expected 1)\n";
	std::cout << "Outside point (6,6): " << bsp(p1, p2, p3, outside) << " (expected 0)\n";
	std::cout << "On-edge point (0,2): " << bsp(p1, p2, p3, onEdge) << " (expected 0)\n";

	return 0;
}

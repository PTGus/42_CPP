/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:35 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 16:42:06 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "=== ClapTrap Test ===" << std::endl;

	ClapTrap c1("Clappy");
	c1.attack("training dummy");
	c1.takeDamage(5);
	c1.beRepaired(3);

	std::cout << "\n=== Copy Constructor Test ===" << std::endl;
	ClapTrap c2(c1);
	c2.attack("copy dummy");

	std::cout << "\n=== Assignment Operator Test ===" << std::endl;
	ClapTrap c3("Temporary");
	c3 = c1;
	c3.attack("assigned dummy");

	std::cout << "\n=== Destructor Call (end of scope) ===" << std::endl;
	return (0);
}

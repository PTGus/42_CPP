/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:35 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 16:41:19 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "=== ScavTrap Test ===" << std::endl;

	ScavTrap s1("Scavvy");
	s1.attack("target dummy");
	s1.takeDamage(40);
	s1.beRepaired(25);
	s1.guardGate();

	std::cout << "\n=== Copy Constructor Test ===" << std::endl;
	ScavTrap s2(s1);
	s2.attack("copy dummy");

	std::cout << "\n=== Assignment Operator Test ===" << std::endl;
	ScavTrap s3("Temporary");
	s3 = s1;
	s3.attack("assigned dummy");

	std::cout << "\n=== Destructor Call (end of scope) ===" << std::endl;
	return (0);
}

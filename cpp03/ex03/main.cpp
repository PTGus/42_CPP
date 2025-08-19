/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:35 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 16:40:42 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "=== FragTrap Test ===" << std::endl;

	FragTrap f1("Fraggy");
	f1.attack("target dummy");
	f1.takeDamage(30);
	f1.beRepaired(20);
	f1.highFivesGuys();

	std::cout << "\n=== Copy Constructor Test ===" << std::endl;
	FragTrap f2(f1);
	f2.attack("copy dummy");

	std::cout << "\n=== Assignment Operator Test ===" << std::endl;
	FragTrap f3("Temporary");
	f3 = f1;
	f3.attack("assigned dummy");

	std::cout << "\n=== Destructor Call (end of scope) ===" << std::endl;
	return (0);
}

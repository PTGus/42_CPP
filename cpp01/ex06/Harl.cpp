/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:17:58 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 14:35:50 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::clog << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cerr << "I think I deserve to have some extra bacon for free.\n I've been coming for years, whereas you started working here just last month." << std::endl;
}
void	Harl::error(void)
{
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void	Harl::complain(std::string level)
{
	size_t	index = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (index < 4)
	{
		if (levels[index] == level)
			break ;
		index++;
	}

	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
			std::cout << "[ INFO ]" << std::endl;
			info();
			std::cout << "[ WARNING ]" << std::endl;
			warning();
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;

		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
			std::cout << "[ WARNING ]" << std::endl;
			warning();
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;

		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;

		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;

		default:
			std::cout << "Harl doesn't know the level " << level << std::endl;
			break;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:19:25 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 13:08:48 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manip.hpp"

bool	inFileManip(Manip &manip, char **av)
{
	std::ifstream	inFile(av[1]);
	if (!inFile.is_open())
	{
		std::cerr << "Error: Cannot open input file (non-existent or insufficient permissions)." << std::endl;
		return (false);
	}
	std::string	line;
	while (std::getline(inFile, line))
		manip.findStr1(line);
	return (true);
}

bool	outFileFill(Manip &manip, std::string outFileName)
{
	outFileName += ".replace";
	std::ofstream	outFile(outFileName.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Failed to create/open replace file.";
		return (false);
	}
	outFile << manip.getBuffer();
	return (true);
}

int	main(int ac, char **av)
{

	if (ac < 4)
	{
		std::cerr << "Insufficient arguments.\nUsage: ./sedIsForLosers <filename> str1 str2." << std::endl;
		return (1);
	}
	else if (ac > 4)
	{
		std::cerr << "Too many arguments.\nUsage: ./sedIsForLosers <filename> str1 str2." << std::endl;
		return (1);
	}
	std::string tmp = av[2];
	if (tmp == "")
	{
		std::cerr << "str1 cannot be empty." << std::endl;
		return (1);
	}
	Manip		manip(av[2], av[3]);
	if (inFileManip(manip, av) == true)
	{
		if (outFileFill(manip, av[1]) == true)
			return (0);
		return (1);
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manip.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:33:46 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 13:02:41 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manip.hpp"

Manip::Manip(std::string newStr1, std::string newStr2)
{
	str1 = newStr1;
	str2 = newStr2;
}
Manip::~Manip()
{
}

void	Manip::findStr1(std::string line)
{
	buffer += replaceStr1(line, 0);
	buffer += '\n';
}
std::string	Manip::replaceStr1(std::string line, size_t index)
{
	while ((index = line.find(str1, index)) != std::string::npos)
	{
		line.erase(index, str1.length());
		line.insert(index, str2);
		index += str2.length();
	}
	return (line);
}

std::string	Manip::getBuffer(void)
{
	return (buffer);
}

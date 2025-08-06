/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manip.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:28:41 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 12:58:26 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANIP_HPP
#define MANIP_HPP

#include <fstream>
#include <string>
#include <iostream>

class Manip
{
private:

	std::string	buffer;
	std::string	str1;
	std::string	str2;


public:

	Manip(std::string newStr1, std::string newStr2);
	~Manip();

	void		findStr1(std::string line);
	std::string	replaceStr1(std::string line, size_t index);
	std::string	getBuffer(void);


};

#endif

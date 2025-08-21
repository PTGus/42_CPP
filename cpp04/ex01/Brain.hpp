/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:00:24 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 14:09:25 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

private:


	std::string	_ideas[100];

public:


	// Constructors //
	Brain();
	Brain(const Brain& toCopy);

	// Destructors //
	virtual ~Brain();

	// Copy assignment overload //
	Brain& operator=(const Brain& toCopy);

};

#endif

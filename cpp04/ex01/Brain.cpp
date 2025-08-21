/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:09:39 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 14:13:13 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(const Brain& toCopy)
{
	std::cout << "Brain Copy Contructor called." << std::endl;
	*this = toCopy;
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& toCopy)
{
	std::cout << "Brain Copy Assignment Operator called." << std::endl;
	if (this != &toCopy){
		for (size_t i = 0; i < 100; i++){
			this->_ideas[i] = toCopy._ideas[i];
		}
	}
	return (*this);
}

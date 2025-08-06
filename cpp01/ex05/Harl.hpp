/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:18:08 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/06 13:22:24 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);


public:

	Harl();
	~Harl();

	void	complain(std::string level);


};

#endif

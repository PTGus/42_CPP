/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:44:55 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/18 14:22:42 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:


	Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
	Contact();
	~Contact();

	std::string	getFirstName();
	std::string getDispFirstName();
	std::string	getLastName();
	std::string getDispLastName();
	std::string	getNickName();
	std::string getDispNickName();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();

private:


	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
};

#endif

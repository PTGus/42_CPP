/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:44:55 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 10:37:50 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {


public:


	Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) ;
	~Contact() {}


	std::string	getFirstName(){
		return (firstName);
	}

	std::string	getLastName(){
		return (lastName);
	}

	std::string	getNickName(){
		return (nickName);
	}

	std::string	getPhoneNumber(){
		return (phoneNumber);
	}

	std::string	getDarkestSecret(){
		return (darkestSecret);
	}


private:


	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
};

#endif

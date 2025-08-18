/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:53:00 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/07 15:08:14 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::overwriteOldestContact(Contact contact)
{
	contacts[contactOldest] = contact;
	if (contactOldest == 8)
		contactOldest = 0;
	else
		contactOldest++;
}

void	PhoneBook::addContact(Contact contact)
{
	if (contactAmmount < 8) {
	contacts[contactAmmount] = contact;
	contactAmmount++;
	}
	else
		overwriteOldestContact(contact);
}

void	PhoneBook::printPhoneBook(void)
{
	std::cout << "|"
		<< std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nick Name" << "|" << std::endl;
	for (size_t i = 0; i < contactAmmount; i++)
	{
		std::cout << "|"
			<< std::setw(10) << i + 1 << "|"
			<< std::setw(10) << contacts[i].getDispFirstName() << "|"
			<< std::setw(10) << contacts[i].getDispLastName() << "|"
			<< std::setw(10) << contacts[i].getDispNickName() << "|" << std::endl;
	}
}

void	PhoneBook::printContactN(int n)
{
	n--;
	std::cout << "First name: " << contacts[n].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[n].getLastName() << std::endl;
	std::cout << "Nick name: " << contacts[n].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[n].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[n].getDarkestSecret() << std::endl;
}

size_t	PhoneBook::getContactAmmount()
{
	return (contactAmmount);
}

std::string	Contact::getFirstName()
{
	return (firstName);
}
std::string Contact::getDispFirstName()
{
	std::string	tmp = getFirstName();

	if (tmp.length() > 10)
		return (tmp.substr(0, 9) + "."); // Truncate to 9 chars and add '.'
	else
		return (tmp);
}

std::string	Contact::getLastName()
{
	return (lastName);
}

std::string Contact::getDispLastName()
{
	std::string	tmp = getLastName();

	if (tmp.length() > 10)
		return (tmp.substr(0, 9) + "."); // Truncate to 9 chars and add '.'
	else
		return (tmp);
}

std::string	Contact::getNickName()
{
	return (nickName);
}

std::string Contact::getDispNickName()
{
	std::string	tmp = getNickName();

	if (tmp.length() > 10)
		return (tmp.substr(0, 9) + "."); // Truncate to 9 chars and add '.'
	else
		return (tmp);
}

std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}

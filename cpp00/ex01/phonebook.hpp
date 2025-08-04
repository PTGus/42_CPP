/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:41:17 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 10:30:31 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <vector>
#include "contact.hpp"

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

class PhoneBook {


public:

	PhoneBook() : contactAmmount(0) {}
	~PhoneBook() {}


	void	removeOldestContact() {
		contacts.erase(contacts.begin());
	}
	void addContact(Contact contact) {
    if (contacts.size() >= 8) {
        removeOldestContact();
    }
	else {
        contactAmmount++;
    }
    contacts.push_back(contact);
	}


	void	printPhoneBook() {
		std::cout << "|"
			<< std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nick Name" << "|" << std::endl;
		for (size_t i = 0; i < contacts.size(); i++)
		{
			std::cout << "|"
				<< std::setw(10) << i + 1 << "|"
				<< std::setw(10) << contacts[i].getFirstName() << "|"
				<< std::setw(10) << contacts[i].getLastName() << "|"
				<< std::setw(10) << contacts[i].getNickName() << "|" << std::endl;
		}
	}


	void	printContactN(int n) {
		n--;
		std::cout << "First name: " << contacts[n].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[n].getLastName() << std::endl;
		std::cout << "Nick name: " << contacts[n].getNickName() << std::endl;
		std::cout << "Phone number: " << contacts[n].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[n].getDarkestSecret() << std::endl;
	}


	int	getContactAmmount() {
		return (contactAmmount);
	}

private:

	std::vector<Contact>	contacts;
	int						contactAmmount;
};

#endif

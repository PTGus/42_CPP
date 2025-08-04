/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:41:17 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 13:58:49 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "contact.hpp"

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

class PhoneBook {


public:

	PhoneBook();
	~PhoneBook();

	void	overwriteOldestContact(Contact contact);
	void	addContact(Contact contact);
	void	printPhoneBook(void);
	void	printContactN(int n);
	size_t	getContactAmmount(void);

private:

	Contact	contacts[8];
	size_t		contactAmmount;
	size_t		contactOldest;
};

#endif

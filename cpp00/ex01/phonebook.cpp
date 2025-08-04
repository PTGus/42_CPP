/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:25:48 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/04 10:49:31 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	validateName(std::string input)
{
	if (input.length() == 0)
		return (false);
	for (size_t i = 0; i < input.length(); i++)
	{
		if (isspace(input[i]))
			return (false);
	}
	return (true);
}

bool	validatePNumber(std::string input)
{
	if (input.length() == 0)
		return (false);
	if (input.length() > 9)
		return (false);
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return (false);
	}
	return (true);
}

std::string	setFirstName()
{
	std::string	tmp;

	while (true)
	{
		if (std::getline(std::cin, tmp)) {
			if (validateName(tmp) == true) {
				return (tmp);
			}
			else {
				std::cout << "Invalid input try something like \"Leonardo\"" << std::endl;
				std::cout << "> ";
				continue ;
			}
		}
		if (std::cin.eof())
		{
			std::cout << RED <<"You pressed ^D, burning the PhoneBook." << RESET << std::endl;
			exit(1);
		}
	}
}

std::string	setLastName()
{
	std::string	tmp;

	while (true)
	{
		if (std::getline(std::cin, tmp)) {
			if (validateName(tmp) == true)
				return (tmp);
			else
			{
				std::cout << "Invalid input try something like \"Papadopoulos\"" << std::endl;
				std::cout << "> ";
				continue ;
			}
		}
		if (std::cin.eof())
		{
			std::cout << RED <<"You pressed ^D, burning the PhoneBook." << RESET << std::endl;
			exit(1);
		}
	}
}

std::string	setNickName()
{
	std::string	tmp;

	while (true)
	{
		if (std::getline(std::cin, tmp)) {
			if (tmp.length() != 0)
				return (tmp);
			else
			{
				std::cout << "Invalid input try something like \"Pookie Bear\"" << std::endl;
				std::cout << "> ";
				continue ;
			}
		}
		if (std::cin.eof())
		{
			std::cout << RED <<"You pressed ^D, burning the PhoneBook." << RESET << std::endl;
			exit(1);
		}
	}
}

std::string	setPhoneNumber()
{
	std::string	tmp;

	while (true)
	{
		if (std::getline(std::cin, tmp)) {
			if (validatePNumber(tmp) == true)
				return (tmp);
			else
			{
				std::cout << "Invalid input try something like \"123456789\"" << std::endl;
				std::cout << "> ";
				continue ;
			}
		}
		if (std::cin.eof())
		{
			std::cout << RED << "You pressed ^D, burning the PhoneBook." << RESET << std::endl;
			exit(1);
		}
	}
}

std::string	setDarkestSecret()
{
	std::string	tmp;

	while (true)
	{
		if (std::getline(std::cin, tmp)) {
			if (tmp.length() != 0)
				return (tmp);
			else
			{
				std::cout << "Invalid input try something like \"This person likes tp sniff gasoline\"" << std::endl;
				std::cout << "> ";
				continue ;
			}
		}
		if (std::cin.eof())
		{
			std::cout << RED << "You pressed ^D, burning the PhoneBook." << RESET << std::endl;
			exit(1);
		}
	}
}

void setContact(PhoneBook& phoneBook)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string phoneNumber;
	std::string	darkestSecret;

	std::cout << "What's your contact's first name?" << std::endl;
	firstName = setFirstName();

	std::cout << "What's your contact's last name?" << std::endl;
	lastName = setLastName();

	std::cout << "What's your contact's nickname?" << std::endl;
	nickName = setNickName();

	std::cout << "What's your contact's phone number?" << std::endl;
	phoneNumber = setPhoneNumber();

	std::cout << "What's your contact's darkest secret?" << std::endl;
	darkestSecret = setDarkestSecret();

	Contact	newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	phoneBook.addContact(newContact);
}

void	expandSearch(PhoneBook& phoneBook)
{
	std::string	buf;

	std::cout << "Which contact would you like to see, press 0 if none." << std::endl;
	std::cout << "> ";
	std::getline(std::cin, buf);
	if (std::cin.eof())
	{
		std::cout << RED << "You pressed ^D, burning the PhoneBook." << RESET << std::endl;
		exit(1);
	}
	if (buf == "0")
	{
		std::cout << "\nExitng search mode." << std::endl;
		return ;
	}
	for (size_t i = 0; i < buf.length(); i++)
	{
		if (isalpha(buf[i]))
		{
			std::cout << "Invalid input: must be a number." << std::endl;
			return ;
		}
	}
	int index = std::atoi(buf.c_str());
	if (index <= 0 || index > phoneBook.getContactAmmount())
	{
		std::cout << "Contact number " << buf << " is out of bounds, exiting search mode." << std::endl;
		return ;
	}
	phoneBook.printContactN(index);
	std::cout << std::endl;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName,
				 std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	line;

	while (true)
	{
		std::cout << GREEN << "[ADD]" << RESET << std::endl;
		std::cout << BLUE << "[SEARCH]" << RESET << std::endl;
		std::cout << YELLOW << "[EXIT]\n" << RESET << std::endl;
		std::cout << "> ";
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cout << RED <<"You pressed ^D, burning the PhoneBook." << RESET << std::endl;
			exit(1);
		}
		if (line == "ADD")
			setContact(phoneBook);
		else if (line == "SEARCH")
		{
			phoneBook.printPhoneBook();
			expandSearch(phoneBook);
		}
		else if (line == "EXIT")
		{
			std::cout << RED << "You have exited, burning the PhoneBook." << RESET << std::endl;
			exit(1);
		}
	}
}

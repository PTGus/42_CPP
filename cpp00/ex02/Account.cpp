/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:13:10 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/19 14:34:24 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		return (true);
	}
	else
		return (false);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	
}

static void	_displayTimestamp( void )
{
    std::time_t now = std::time(NULL);
    std::tm* local = std::localtime(&now);

	std::cout << "[";
    std::cout << 1900 + local->tm_year;
    std::cout << 1 + local->tm_mon;
    std::cout << local->tm_mday;
    std::cout << "_" << local->tm_hour;
    std::cout << local->tm_min;
    std::cout << local->tm_sec;
	std::cout << "]" << std::endl;
}


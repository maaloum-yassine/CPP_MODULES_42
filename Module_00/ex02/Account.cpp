/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:57:36 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/13 04:29:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account :: _nbAccounts = 0;
int Account :: _totalAmount = 0;
int Account :: _totalNbDeposits = 0;
int Account :: _totalNbWithdrawals = 0;

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

Account :: Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_totalAmount += _amount;
}

void Account::_displayTimestamp()
{
	 std::time_t currentTime = std::time(NULL);
	 std::tm* timeDetails = std::localtime(&currentTime);
	 std::cout	<< "[" << timeDetails->tm_year + 1900
				<< timeDetails->tm_mon + 1 <<  timeDetails->tm_mday << "_"
				<< timeDetails->tm_hour << timeDetails->tm_min
				<< timeDetails->tm_sec << "]";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount ;
	std::cout << ";deposit:" << deposit ;
	_amount += deposit;
	std::cout << ";amount:" << _amount;
	_totalNbDeposits ++;
	_nbDeposits++;
	std :: cout << ";nb_deposits:"<< _nbDeposits << std::endl;
	_totalAmount += deposit;
}


int		Account ::checkAmount( void ) const
{
	return (_amount);
}

bool	Account:: makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std:: cout << " index:" << _accountIndex;
	std:: cout << ";p_amount:" << _amount ;
	std :: cout << ";withdrawal:";
	if (withdrawal > checkAmount())
	{
		std:: cout << ":refused" << std :: endl;
		return (false);
	}
	_nbWithdrawals ++;
	_amount -= withdrawal;
	std :: cout << withdrawal << ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalNbWithdrawals ++;
	_totalAmount -= withdrawal;
	return (true);
}


Account :: ~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount << ";closed" << std::endl;
	--_nbAccounts;
}

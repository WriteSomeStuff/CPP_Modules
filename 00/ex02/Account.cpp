/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:27:10 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/01 16:48:37 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() \
		<< ";total:" << getTotalAmount() \
		<< ";deposits:" << getNbDeposits() \
		<< ";withdrawals:" << getNbWithdrawals() << '\n';
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount (initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";amount:" << checkAmount() << ";created\n";
}

Account::~Account()
{
	_nbAccounts--;
	_totalAmount -= checkAmount();
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";amount:" << checkAmount() << ";closed\n";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";p_amount:" << checkAmount() \
		<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << checkAmount() \
		<< ";nb_deposits:" << _nbDeposits << '\n';
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";p_amount:" << checkAmount();
	if (checkAmount() < withdrawal)
	{
		std::cout << ";withdrawal:refused" << '\n';
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal \
		<< ";amount:" << checkAmount() << \
		";nb_withdrawals:" << _nbWithdrawals << '\n';
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";amount:" << checkAmount() \
		<< ";deposits:" << _nbDeposits \
		<< ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::_displayTimestamp()
{
	std::time_t	now;
	std::tm		time;
	char		buffer[80];

	now = std::time(NULL);
	time = *std::localtime(&now);
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &time);
	std::cout << "[" << buffer << "] ";
}

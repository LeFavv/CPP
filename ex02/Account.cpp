/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:17:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/09 11:55:01 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::~Account(void)
{
    _displayTimestamp();
    _nbAccounts--;
    _totalAmount -= this->_amount;
    std::cout << "index:" << this->_accountIndex << ";" << std::ends;
    std::cout << "amout:" << this->_amount << ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
    _totalNbDeposits++;
    _totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";" << std::ends;
    std::cout << "amout:" << this->_amount << ";created" << std::endl;
}
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

void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts" << _nbAccounts << std::ends;
    std::cout << ";total:" << _totalAmount << std::ends;
    std::cout << ";deposits:" << _totalNbDeposits << std::ends;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl; 
}

void    Account::displayStatus(void)const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << std::ends;
    std::cout << "amount:" << this->_amount << ";" << std::ends;
    std::cout << "deposits:" << this->_nbDeposits << ";" << std::ends;
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    this->_nbDeposits += 1;
    this->_amount += deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << this->_accountIndex << ";" << std::ends;
    std::cout << "p_amount:" << this->_amount - deposit << ";" << std::ends;
    std::cout << "deposit:" << deposit << std::ends;
    std::cout << "amount:" << this->_amount - deposit << ";" << std::ends;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal <= this->_amount)
    {
        this->_nbWithdrawals++;
        this->_amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << "index:" << this->_accountIndex << ";" << std::ends;
        std::cout << "p_amount:" << this->_amount << ";" << std::ends;
        std::cout << "deposits:" << this->_nbDeposits << ";" << std::ends;
        std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    }
    
    else
    {
        std::cout << "index:" << this->_accountIndex << ";" << std::ends;
        std::cout << "p_amount:" << this->_amount << ";" << std::ends;
        std::cout << "withdrawals:refused" << std::endl;
        return (false);
    }
}

int Account::checkAmount(void)const
{
    return (_amount);
}

void Account::_displayTimestamp(void)
{
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    std::cout << "[" << datetime.tm_year + 1900 << std::ends;
    if (datetime.tm_mon < 10)
        std::cout << "0" << std::ends;
    std::cout << datetime.tm_mon + 1 << std::ends;
    if (datetime.tm_mday < 10)
        std::cout << "0" << std::ends;
    std::cout << datetime.tm_mday << "_" << std::ends;
    std::cout << datetime.tm_hour << std::ends;
    std::cout << datetime.tm_min << std::ends;
    std::cout << datetime.tm_sec << "] " << std::ends;
}
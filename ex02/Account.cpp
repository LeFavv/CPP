/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:17:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/09 02:11:34 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::~Account(void){}; //close

Account::Account(int initial_deposit)
{
        //open
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

//Affiche pour tout
void	Account::displayAccountsInfos(void)
{
    
}

//affiche pour chaque index
void    Account::displayStatus(void)const
{

}

void    Account::makeDeposit(int deposit)
{

}

bool    Account::makeWithdrawal(int withdrawal)
{
//check si on peut faire le retrait si on veut pas prendre plus que amount
}

int Account::checkAmount(void)const
{
    return (_amount);
}


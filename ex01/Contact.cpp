/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:52:44 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/07 11:55:10 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <cstring>
#include <iostream>
#include <cctype>

Contact::Contact(void){};

Contact::~Contact(void){};

int Contact::FillContact(void)
{
	std::cout << "[First Name] : ";
	while (_FirstName.empty())
	{
		std::getline(std::cin, _FirstName);
		if (std::cin.eof())
			return 0;
	}
	std::cout << "[Last Name] : ";
	while (_LastName.empty())
	{
		std::getline(std::cin, _LastName);
		if (std::cin.eof())
			return 0;
	}
	std::cout << "[NickName] : ";
	while (_NickName.empty())
	{
		std::getline(std::cin, _NickName);
		if (std::cin.eof())
			return 0;
	}
	std::cout << "[Phone Number] : ";
	while (_PhoneNbr.empty())
	{
		std::getline(std::cin, _PhoneNbr);
		if (std::cin.eof())
			return 0;
	}
	std::cout << "[Darkest Secret] : ";
	while (_DarkestSecret.empty())
	{
		std::getline(std::cin, _DarkestSecret);
		if (std::cin.eof())
			return 0;
	}
	return 1;
}

//implementer le fait de mettre un point si ligne > 10
void	Contact::Print(void)
{
	std::cout << _FirstName << "|" << std::ends;
	std::cout << _LastName << "|" << std::ends;
	std::cout << _NickName << "|" << std::ends;
	std::cout << _PhoneNbr << "|" << std::ends;
	std::cout << _DarkestSecret << std::endl;
}
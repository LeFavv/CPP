/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:52:44 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/17 13:20:45 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "main.hpp"

Contact::Contact(void){};

Contact::~Contact(void){};

int Contact::FillContact(void)
{
	std::cout << "[First Name] : ";
	if (!_FirstName.empty())
		_FirstName.clear();
	while (_FirstName.empty() || !ft_is_alpha(_FirstName))
	{
		std::getline(std::cin, _FirstName);
		if (!ft_is_alpha(_FirstName))
		{
			std::cout << "You have to type only alphabeticals caracteres" << std::endl;
			std::cout << "[First Name] : ";
		}
		if (std::cin.eof())
			return 0;
		
	}
	std::cout << "[Last Name] : ";
	if (!_LastName.empty())
		_LastName.clear();
	while (_LastName.empty() || !ft_is_alpha(_LastName))
	{
		std::getline(std::cin, _LastName);
		if (!ft_is_alpha(_LastName))
		{
			std::cout << "You have to type only alphabeticals caracteres" << std::endl;
			std::cout << "[Last Name] : ";
		}
		if (std::cin.eof())
			return 0;
	}
	std::cout << "[NickName] : ";
	if (!_NickName.empty())
		_NickName.clear();
	while (_NickName.empty())
	{
		std::getline(std::cin, _NickName);
		if (std::cin.eof())
			return 0;
	}
	std::cout << "[Phone Number] : ";
	if (!_PhoneNbr.empty())
		_PhoneNbr.clear();
	while (_PhoneNbr.empty() || !ft_is_num(_PhoneNbr) || _PhoneNbr.size() < 4)
	{
		std::getline(std::cin, _PhoneNbr);
		if (!ft_is_num(_PhoneNbr))
		{
			std::cout << "Only numerics values" << std::endl;
			std::cout << "[Phone Number] : ";
		}
		if (_PhoneNbr.size() < 4)
		{
			std::cout << "A Phone Number with less than 4 numbers ?! Doesnt make sense" << std::endl;
			std::cout << "[Phone Number] : ";
		}
		if (std::cin.eof())
			return 0;
	}
	std::cout << "[Darkest Secret] : ";
	if (!_DarkestSecret.empty())
		_DarkestSecret.clear();
	while (_DarkestSecret.empty())
	{
		std::getline(std::cin, _DarkestSecret);
		if (std::cin.eof())
			return 0;
	}
	return 1;
}

std::string Contact::MyStr(std::string str)
{
	std::string NewStr;
	
	if (str.size() > 10)
	{
		NewStr = str.substr(0, 9) + ".";
	}
	else
	{
		NewStr = str;
		while (NewStr.size() < 10)
		{
			NewStr = ' ' + NewStr;
		}
	}
	return (NewStr);
}

void	Contact::Print(int i)
{
	std::cout << i + 1 << " | " << MyStr(_FirstName) << " | "
		 << MyStr(_LastName) << " | " << MyStr(_NickName) << std::endl;
}

void	Contact::PrintIndex(void)
{
	std::cout << "[First Name] = " << _FirstName << std::endl;
	std::cout << "[Last Name] = " << _LastName << std::endl;
	std::cout << "[Nick Name] = " << _NickName << std::endl;
	std::cout << "[Phone Number] = " << _PhoneNbr << std::endl;
	std::cout << "[Darkest Secret 👀] = " << _DarkestSecret << std::endl;
}
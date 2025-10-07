/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:52:44 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/07 14:08:27 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include "main.hpp"

Contact::Contact(void){};

Contact::~Contact(void){};

int Contact::FillContact(void)
{
	std::cout << "[First Name] : ";
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
	while (_LastName.empty() || !ft_is_alpha(_LastName))
	{
		if (!ft_is_alpha(_LastName))
		{
			std::cout << "You have to type only alphabeticals caracteres" << std::endl;
			std::cout << "[Last Name] : ";
		}
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

std::string Contact::MyStr(std::string str)
{
	std::string NewStr;
	
	
}

//implementer le fait de mettre un point si ligne > 10
void	Contact::Print(int i)
{
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:47:49 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/17 11:33:46 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include "main.hpp"

PhoneBook::PhoneBook(void){};

PhoneBook::~PhoneBook(void){};

void    PhoneBook::SetNbContact(void){
    NbContacts = 0;
    flag = 1;
}
int    PhoneBook::GetNbContact(void){
    return (NbContacts);
}

void PhoneBook::AddContact(void)
{
    if (flag != 1)
        SetNbContact();
    if (!list[NbContacts % 8].FillContact())
        return ;
    NbContacts++;
}

int    PhoneBook::PrintAllContacts(void){

    if (flag != 1)
        SetNbContact();
    if (NbContacts == 0){
        std::cout << "Nothing to print" << std::endl;
        return 0;
    }
    int temp;
    if (NbContacts > 8)
        temp = 8;
    else
        temp = NbContacts;
    for (int i = 0; i < temp ; i++)
    {
        list[i].Print(i);
    }
    std::cout << "Enter the index of the contact you want : " << std::ends;
    std::string index;
    while (index.empty() || index.size() > 1 || !ft_is_num(index) || index[0] - '0' <= 0 || index[0] - '0' >= '9')
	{
		std::getline(std::cin, index);
        if (index.size() > 1 || !ft_is_num(index) || index[0] - '0' <= 0 || index[0] - '0' >= '9')
            std::cout << "One digit between 1 && 8" << std::endl;
		if (std::cin.eof())
			return (0);
	}
    int nbIndex = index[0] - '0';
    if (nbIndex > NbContacts % 8)
    {
        std::cout << "Nothing to print at this index" << std::endl;
        return (1);
    }
    list[nbIndex - 1].PrintIndex(); 
    return (1);
}

void    PhoneBook::SetFlag(void){
    flag = 0;
    return;
}
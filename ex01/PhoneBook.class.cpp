/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:47:49 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/07 11:53:33 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

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

void    PhoneBook::PrintAllContacts(void){

    if (flag != 1)
        SetNbContact();
    if (NbContacts == 0){
        std::cout << "Nothing to print" << std::endl;
        return ;
    }
    for (int i = 0; i < NbContacts; i++)
    {
        list[i].Print();
    }
}
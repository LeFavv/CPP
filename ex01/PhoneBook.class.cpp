/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:47:49 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/06 18:35:21 by vafavard         ###   ########.fr       */
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

void PhoneBook::AddContact(void)
{
    if (flag != 1)
        SetNbContact();
    if (NbContacts < 8)
        list[NbContacts].FillContact();
    NbContacts++;
}
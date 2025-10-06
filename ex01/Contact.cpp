/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:52:44 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/06 18:30:06 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <cstring>
#include <iostream>

Contact::Contact(void){};

Contact::~Contact(void){};

void Contact::FillContact(void)
{
    std::cout << "[First Name] : ";
    std::getline(std::cin, FirstName);
    
    std::cout << "[Last Name] : ";
    std::getline(std::cin, LastName);
    
    std::cout << "[NickName] : ";
    std::getline(std::cin, NickName);

    std::cout << "[Phone Number] : ";
    std::getline(std::cin, PhoneNbr);

    std::cout << "[Darkest Secret] : ";
    std::getline(std::cin, DarkestSecret);
}
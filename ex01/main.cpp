/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:56:08 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/07 15:13:39 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "main.hpp"

int ft_is_alpha(std::string str)
{
    for (int i = 0; str[i]; i++){
        if (!(str[i] >= 'a' && str[i] <= 'z'
            || str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
    }
    return 1;
}

int ft_is_num(std::string str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
    }
    return (1);
}

int main(void)
{
    std::cout << "Hey There\nWelcome to THE PHONE BOOK" << std::endl;
    std::cout << "Type what you want : " << std::ends;
    std::cout << "You can ADD, SEARCH OR..... EXIT :'(" << std::endl;
    
    PhoneBook book;
    book.SetFlag();

    while (true)
    {
        std::string input;
        std::cin >> input;
        if (!std::cin || strcmp(input.c_str(), "EXIT") == 0)
            return (std::cout << "Bye !" << std::endl, 0);
        std::cout << "You can ADD, SEARCH OR..... EXIT :'(" << std::endl;
        if (!std::cin || strcmp(input.c_str(), "EXIT") == 0)
            return (std::cout << "Bye !" << std::endl, 0);
        else if (strcmp(input.c_str(), "ADD") == 0)
            book.AddContact();
        else if (strcmp(input.c_str(), "SEARCH") == 0)
        {
            if  (!book.PrintAllContacts())
                return (std::cout << "Bye !" << std::endl, 0);
        }
    }
    return (0);
}
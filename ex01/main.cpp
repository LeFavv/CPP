/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:56:08 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/06 17:33:00 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

int main(void)
{
    std::cout << "Hey There\nWelcome to THE PHONE BOOK" << std::endl;
    std::cout << "You can ADD, SEARCH OR..... EXIT :'(" << std::endl;
    std::cout << "Type what you want" << std::endl;

    while (true)
    {
        std::string input;
        std::cin >> input;

        if (!std::cin || strcmp(input.c_str(), "EXIT") == 0)
            return (std::cout << "Bye !" << std::endl, 0);
        
            
    }
    return (0);
}
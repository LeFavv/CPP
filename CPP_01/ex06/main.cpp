/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:27:58 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 22:06:50 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::cout << "Hi there 👋\nThese are the 4 level of the Harl" << std::endl;
    sleep(1);
    std::cout << "DEBUG : ";
    harl.complain("DEBUG");
    sleep(1);
    std::cout << "INFO : "; 
    harl.complain("INFO");
    sleep(1);
    std::cout << "WARNING : "; 
    harl.complain("WARNING");
    sleep(1);
    std::cout << "ERROR : "; 
    harl.complain("ERROR");
    sleep(1);
    std::cout << "I'll give you 3 chances to try one this 4 level to check what happens" << std::endl;
    
    std::string input;
    // for (int i = 0; i < 3; i++)
    // {
        getline(std::cin, input);
        harl.complain(input);
    // }
}
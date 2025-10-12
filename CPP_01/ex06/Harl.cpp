/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:10:00 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 22:13:42 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){};

Harl::~Harl(void){};

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle"
            << "-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money."
            <<  "You didn’t putenough bacon in my burger! If you did," 
            << "I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free."
            << "I’ve been coming for"
            << "years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;   
}

void Harl::complain(std::string level)
{
    void    (Harl::*functionPTR[])(void) =  {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string index[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (index[i] == level)
        {
            switch (i)
            {
                case 0:
                    for (int j = 0; j < 4; j++)
                        (this->*functionPTR[j])();
                    break;
                case 1:
                    for (int j = 1; j < 4; j++)
                        (this->*functionPTR[j])();
                    break;
                case 2:
                    for (int j = 2; j < 4; j++)
                        (this->*functionPTR[j])();
                    break;
                case 3:
                    for (int j = 3; j < 4; j++)
                        (this->*functionPTR[j])();
                    break;
            }
        }
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:13:58 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/10 09:18:46 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_name = "default";   
}

Zombie::Zombie(std::string s)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << s << ": " << std::ends;
    this->_name = s;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor called" << std::endl;
    std::cout << this->_name << ": died" << std::endl;
}

void    Zombie::announce(void)
{   
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;    
}
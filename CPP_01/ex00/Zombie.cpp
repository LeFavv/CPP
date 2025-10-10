/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:13:58 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/10 17:42:26 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string s)
{
    std::cout << s << ": " << std::ends;
    this->_name = s;
    announce();
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << ": died" << std::endl;
}

void    Zombie::announce(void)const
{   
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;    
}
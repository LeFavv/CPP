/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:36:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/10 18:46:43 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie(int N, std::string name)
// {
//     this->_index = N;
//     this->_name = name;
//     std::cout << this->_name << this->_index << ": "<< std::ends;
//     std::cout << "Braiiiiiiinz..." << std::endl;
// };

void    Zombie::annouce(void)
{
    std::cout << this->_name << this->_index << ": "<< std::ends;
    std::cout << "Braiiiiiiinz..." << std::endl;
}

void    Zombie::set_name_index(int i, std::string name)
{
    this->_name = name;
    this->_index = i;
    annouce();
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << this->_index << ": "<< std::ends;
    std::cout << "died" << std::endl;
};

Zombie::Zombie(void){};
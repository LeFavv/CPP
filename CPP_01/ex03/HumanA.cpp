/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:47:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 10:07:38 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{  
    this->_weapon = weapon.getType();
    this->_name = name;
    //peux mettre un message pour dire qu'on rentre en scene
}

HumanA::~HumanA()
{
    //message pour dire qu'on meurt ou give up
}

void    HumanA::attack()
{
    
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
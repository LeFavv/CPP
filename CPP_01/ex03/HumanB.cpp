/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 10:14:54 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 10:27:58 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB(){};

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack()
{
    //ajouter un booleen pour check si HumanB est arme ou pas 
    //dire qu'il attack sans arme si pas arme   
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
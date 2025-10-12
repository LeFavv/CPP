/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 10:14:54 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 11:03:00 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    if (name[0] == 0)
        name = "Martin";
    this->_name = name;
    this-> _isArmed = false;
}

HumanB::~HumanB(){};

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_isArmed = true;
    this->_weapon = &weapon;
    
}

void    HumanB::attack()
{
    //ajouter un booleen pour check si HumanB est arme ou pas 
    //dire qu'il attack sans arme si pas arme
    if (this->_isArmed)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " attacks a la mano " << std::endl;
}
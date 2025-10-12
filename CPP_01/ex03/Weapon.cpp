/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:08:26 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 10:06:26 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
};

Weapon::~Weapon(void)
{
    //dire qu'on drop l'arme
};

std::string &Weapon::getType()
{
    return (_type);
}

void    Weapon::setType(std::string const type)
{
    this->_type = type;
}

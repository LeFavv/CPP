/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:08:26 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 11:05:23 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    if (type[0] == 0)
        type = "default club";
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
    if (type[0] == 0)
    {
        this->_type = "default club";
        return ;
    }
    this->_type = type;
}

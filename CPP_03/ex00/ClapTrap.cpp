/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:47 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 11:01:05 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("clapclap")
{
    //message de construction
    this->_HitPoint = 10;
    this->_EnergyPoint = 10;
    this->_AttackDamage = 0;
}

ClapTrap::~ClapTrap(void){};
//message de destruction

ClapTrap::ClapTrap(std::string const &name) : _name(name)
{
    //message de construction
    this->_HitPoint = 10;
    this->_EnergyPoint = 10;
    this->_AttackDamage = 0;
}

void    ClapTrap::attack(const std::string& target)
{
    //message d'attaque
    ClapTrap(target).takeDamage(0);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    //message de prise de damage
    this->_HitPoint -= amount;
    //mettre une verif de si il est mort
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    //message de reparation
    this->_HitPoint += amount;
}
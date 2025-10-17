/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:47 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 11:52:04 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("clapclap")
{
    std::cout <<  "ClapTrap " << _name << " have been created" << std::endl;
    this->_HitPoint = 10;
    this->_EnergyPoint = 10;
    this->_AttackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claptrap " << this->_name << " have been destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name)
{
    std::cout <<  "ClapTrap " << _name << " have been created" << std::endl;
    this->_HitPoint = 10;
    this->_EnergyPoint = 10;
    this->_AttackDamage = 0;
}

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " <<
     target << "causing " << this-> _AttackDamage << " points of damage !" << std::endl; 
    //attaquer et repair font perdre des points d'ernergy
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPoint <= 0)
    {
        std::cout << "Health bar already <= 0 " << this->_name 
                << " cant takes more damages" << std::endl;
        return ;           
    }
    std::cout << "Claptrap " << this->_name << " takes " << amount << " points of damages"
                << std::endl;
    this->_HitPoint -= amount;
    
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " repaired " << amount <<
                " points himself" << std::endl;
    this->_HitPoint += amount;
    //attaquer et repair font perdre des points d'ernergy
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:10:55 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/18 11:06:19 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), ScavTrap("default"),
            FragTrap("default")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_name = "default";
    this->_HitPoint = FragTrap::_HitPoint;
    this->_EnergyPoint = ScavTrap::_EnergyPoint;
    this->_AttackDamage = FragTrap::_AttackDamage;
    this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name"), 
            ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_name = name;
    this->_HitPoint = FragTrap::_HitPoint;
    this->_EnergyPoint = ScavTrap::_EnergyPoint;
    this->_AttackDamage = FragTrap::_AttackDamage;
    this->_AttackDamage = FragTrap::_AttackDamage;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy):  ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    this->_name = copy._name;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
    if (this != &src)
    {
        this->_name  = src._name;
        this->_AttackDamage = src._AttackDamage;
        this->_EnergyPoint = src._EnergyPoint;
        this->_HitPoint = src._HitPoint;
    }
    return (*this);
}    

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My DiamondTrap name is " << this->_name << std::endl;
    std::cout << "My claptrap name is " << ClapTrap::_name << std::endl;
}
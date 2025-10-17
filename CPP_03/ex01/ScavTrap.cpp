/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:12:59 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 14:02:03 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_AttackDamage = 20;
    this->_name = "scav";
    this->_guarding = false;
    std::cout <<  "ScavTrap " << _name << " have been created" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_AttackDamage = 20;
    this->_name = name;
    this->_guarding = false;
    std::cout <<  "ScavTrap " << _name << " have been created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destroy " << this->_name << " ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    this->_guarding = copy._guarding;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_AttackDamage = src._AttackDamage;
        this->_EnergyPoint = src._EnergyPoint;
        this->_HitPoint = src._HitPoint;
    }
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

void    ScavTrap::guardGate()
{
    this->_guarding = true;
    std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_EnergyPoint <= 0)
    {
        std::cout << "ScavTrap" << this->_name << " cant attack " <<
            "not enought energy points" << std::endl;
        return ;
    }
    else if (this->_HitPoint <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " cant attack " <<
            "not enought Health points" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " <<
     target << "causing " << this-> _AttackDamage << " points of damage !" << std::endl;
    this->_EnergyPoint--; 
}
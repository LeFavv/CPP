/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:29:33 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 18:44:18 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_HitPoint = 100;
    this->_EnergyPoint = 100;
    this->_AttackDamage = 30;
    this->_hf = false;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_HitPoint = 100;
    this->_EnergyPoint = 100;
    this->_AttackDamage = 30;
    this->_name = name;
    this->_hf = false;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destroy " << this->_name << " FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    this->_hf = copy._hf;
}

FragTrap    &FragTrap::operator=(FragTrap const &src)
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

void    FragTrap::highFivesGuys(void)
{
    this->_hf = true;
    std::cout << this->_name << " Requests a high Five" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:49 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 10:54:50 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:
        ClapTrap(void);
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &copy);
        ~ClapTrap(void);
        ClapTrap &operator=(ClapTrap const &src);
        
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
private:
        std::string const _name;
        int _HitPoint;
        int _EnergyPoint;
        int _AttackDamage;
};

#endif
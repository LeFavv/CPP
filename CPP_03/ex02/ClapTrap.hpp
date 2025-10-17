/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:49 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 13:54:46 by vafavard         ###   ########.fr       */
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
        
protected:
        std::string _name;
        int _HitPoint;
        int _EnergyPoint;
        int _AttackDamage;
};

#endif
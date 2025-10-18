/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:10:57 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/18 11:06:57 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap(void);
    DiamondTrap(std::string const &name);
    DiamondTrap(DiamondTrap const &copy);
    ~DiamondTrap(void);
    DiamondTrap &operator=(DiamondTrap const &src);
    
    void    whoAmI(void);
    void    attack(const std::string& target);

private:
    std::string _name;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:13:05 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 14:01:10 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
        ScavTrap(void);
        ScavTrap(std::string const &name);
        ScavTrap(ScavTrap const &copy);
        ~ScavTrap(void);
        ScavTrap &operator=(ScavTrap const &src);
        
        void    guardGate(void);
        void    attack(const std::string& target);

private:
        bool    _guarding;    
};
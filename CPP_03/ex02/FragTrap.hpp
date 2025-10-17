/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:29:36 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 18:34:16 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
        FragTrap(void);
        FragTrap(std::string const &name);
        FragTrap(FragTrap const &copy);
        ~FragTrap(void);
        FragTrap &operator=(FragTrap const &src);
        
        void    highFivesGuys(void);
private:
        bool    _hf;
};

#endif
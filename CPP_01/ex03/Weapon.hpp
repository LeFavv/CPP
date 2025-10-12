/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:03:37 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 10:06:48 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>
#include <cstring>

class Weapon
{
public:
        Weapon(std::string type);
        ~Weapon();
        std::string&  getType(void);
        void    setType(std::string const type);
        
private:
        std::string _type;    
};

#endif
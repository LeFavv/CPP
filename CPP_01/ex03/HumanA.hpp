/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:33:08 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 09:59:48 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//prends son arme dans le constructeur

//fonction attack()
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack(void);
        
private:
        Weapon &_weapon;
        std::string _name;
};

#endif
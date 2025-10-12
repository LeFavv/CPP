/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:33:41 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 10:23:56 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ne prends pas son arme dans le constructeur

//fonction attack()
//fonction setWeapon(type)

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon &weapon);
        void    attack(void);
private:
        std::string _name;
        Weapon *_weapon;
};

#endif
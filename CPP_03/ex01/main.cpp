/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:51 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 13:55:28 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ClapTrap Bernard("Bernard");
    ScavTrap Valentin("Valentin");
    
    Valentin.attack("PAC ");
    Valentin.guardGate();
    // Bernard.beRepaired(50);
    // Bernard.takeDamage(60);
    // Bernard.attack("Someone");
    return (0);
}
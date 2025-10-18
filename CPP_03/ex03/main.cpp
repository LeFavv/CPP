/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:51 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/18 10:57:38 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap test("Valentin");

    test.attack("Alix");
    // ClapTrap Bernard("Bernard");
    // ScavTrap Valentin("Valentin");
    // ScavTrap Test;
    // FragTrap Alix("Alix");
    // Test = Valentin;

    // Valentin.attack("PAC ");
    // Test.attack("PAC ");
    // Alix.attack("PAC ");
    // Valentin.guardGate();
    // Test.guardGate();
    // Alix.highFivesGuys();
    // Bernard.beRepaired(50);
    // Bernard.takeDamage(60);
    // Bernard.attack("Someone");
    return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:51 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 12:03:30 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Bernard("Beuteu");
    ClapTrap Bernadette;
    ClapTrap Bibi("test");
    
    Bibi = Bernadette;
    
    Bibi.attack("Someone");
    
    Bernard.beRepaired(50);
    Bernadette.takeDamage(60);
    Bernadette.attack("Someone");
    return (0);
}
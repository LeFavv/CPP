/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:14:07 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/10 17:51:56 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(void)
{
    randomChump("1");
    randomChump("2");
    randomChump("3");
    randomChump("4");
    randomChump("5");
    randomChump("6");
    randomChump("7");
    randomChump("8");

    Zombie *test1 = newZombie("12");
    Zombie *test2 = newZombie("13");
    Zombie *test3 = newZombie("14");
    Zombie *test4 = newZombie("15");
    delete test1;
    delete test2;
    delete test3;
    delete test4;
    return (0);
}
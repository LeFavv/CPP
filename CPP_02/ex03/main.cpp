/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:00:30 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 15:48:51 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    Point const a(7, 8);
    Point const b(13 , 4);
    Point const c(3, 3);
    Point const p1(7, 5); //devrait etre dedans
    Point const p2(2, 2); //ne devrait pas y etre
    Point const p3(10, 5);
    Point const p4(10, 9);
    
    
    if (bsp(a, b, c, p1))
        std::cout << "p1 inside" << std::endl;
    else
        std::cout << "p1 out" << std::endl;
    if (bsp(a, b, c, p2))
        std::cout << "p2 inside" << std::endl;
    else
        std::cout << "p2 out" << std::endl;
    if (bsp(a, b, c, p3))
        std::cout << "p3 inside" << std::endl;
    else
        std::cout << "p3 out" << std::endl;
    if (bsp(a, b, c, p4))
        std::cout << "p4 inside" << std::endl;
    else
        std::cout << "p4 out" << std::endl;
    return (0);
        
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:00:30 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/17 09:55:03 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    Point const a(9, 9);
    Point const b(7, 20);
    Point const c(20, 11);
    Point const p1(5, 10);
    Point const p2(8, 19);
    Point const p3(9, 13);
    Point const p4(16, 12);
    Point const p5(15, 3);
    Point const p6(16, 14);
    Point const p7(18, 13);
    Point const p8(20, 8);
    
    
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
    if (bsp(a, b, c, p5))
        std::cout << "p5 inside" << std::endl;
    else
        std::cout << "p5 out" << std::endl;
    if (bsp(a, b, c, p6))
        std::cout << "p6 inside" << std::endl;
    else
        std::cout << "p6 out" << std::endl;
    if (bsp(a, b, c, p7))
        std::cout << "p7 inside" << std::endl;
    else
        std::cout << "p7 out" << std::endl;
    if (bsp(a, b, c, p8))
        std::cout << "p8 inside" << std::endl;
    else
        std::cout << "p8 out" << std::endl;
    
    return (0);
        
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:00:22 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 15:57:41 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float denom = (b.getY() - c.getY()) * (a.getX() - c.getX()) +
                  (c.getX() - b.getX()) * (a.getY() - c.getY());

    float alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) +
                   (c.getX() - b.getX()) * (point.getY() - c.getY())) / denom;

    float beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) +
                  (a.getX() - c.getX()) * (point.getY() - c.getY())) / denom;

    float gamma = 1 - alpha - beta;
    // std::cout << "a" << a.getX() << " " << a.getY() << std::endl;
    // std::cout << "b" << b.getX() << " " << b.getY() << std::endl;
    // std::cout << "c" << c.getX() << " " << c.getY() << std::endl;
    // std::cout << "point" << point.getX() << " " << point.getY() << std::endl;
    
    // std::cout << denom << std::endl;
    // std::cout << alpha << std::endl;
    // std::cout << beta << std::endl;
    // std::cout << gamma << std::endl;
    return ((alpha > 0 && beta > 0 && gamma > 0) || (alpha < 0 && beta < 0 && gamma < 0));
}

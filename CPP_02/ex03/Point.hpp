/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:00:39 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 15:14:03 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
        Point(void);
        Point(float value1, float value2);
        Point(Point const &copy);
        Point &operator=(Point const &src);
        ~Point();
        float   getX() const;
        float   getY() const;

        
private:
        Fixed const x;
        Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
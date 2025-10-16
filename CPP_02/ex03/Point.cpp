/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:00:36 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 15:24:19 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(){};

Point::Point(float value1, float value2):x(Fixed(value1)), y(Fixed(value2))
{
}

Point::Point(Point const &copy) : x(copy.x), y(copy.y)
{
}

Point   &Point::operator=(Point const &src)
{
    (void)src;
    return *this;
}

Point::~Point(){};

float   Point::getX()const
{
    return (this->x.toFloat());
}

float   Point::getY()const
{
    return (this->y.toFloat());
}
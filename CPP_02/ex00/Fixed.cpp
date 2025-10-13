/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:41:51 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/13 12:55:39 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0){};

Fixed::Fixed(Fixed const & src)
{
    *this = src;
}

Fixed::~Fixed(void){};

Fixed & Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

int Fixed::getRawBits(void)const
{
    return (this->_value);
}

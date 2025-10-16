/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:02:14 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 10:38:00 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const input)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = input * (1 << this->_bits);
}

Fixed::Fixed(float const input)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(input * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat(void)const
{
    return ((float)this->_value / (float)(1 << this->_bits));
}

int     Fixed::toInt(void)const
{
    return (this->_value >> this->_bits);
}

Fixed    &Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assigignment operator called" << std::endl;
    if (this != &src)
        this->_value = src.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void)const
{
    return (this->_value);
}

void   Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

std::ostream &operator<<(std::ostream& o, Fixed const& fixed)
{
    o << fixed.toFloat();
    return o;
}
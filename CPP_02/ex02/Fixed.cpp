/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:47:44 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 12:59:11 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(void)
{
    setRawBits(0); // init de base
}

Fixed::Fixed(int const input)
{
    this->_value = input * (1 << this->_bits);
}

Fixed::Fixed(float const input)
{
    this->_value = roundf(input * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

Fixed::~Fixed(void){};

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

Fixed   Fixed::operator+(Fixed const &fixed)
{
    return Fixed(toFloat() + fixed.toFloat());
}

Fixed   Fixed::operator-(Fixed const &fixed)
{
    return Fixed(toFloat() - fixed.toFloat());
}

Fixed   Fixed::operator*(Fixed const &fixed)
{
    return Fixed(toFloat() * fixed.toFloat());
}

Fixed   Fixed::operator/(Fixed const &fixed)
{
    return Fixed(toFloat() / fixed.toFloat());
}

bool    Fixed::operator>(Fixed const &other)const
{
    return (toFloat() > other.toFloat());
}

bool    Fixed::operator<(Fixed const &other)const
{
    return (toFloat() < other.toFloat());
}

bool    Fixed::operator>=(Fixed const &other)const
{
    return (toFloat() >= other.toFloat());
}

bool    Fixed::operator<=(Fixed const &other)const
{
    return (toFloat() <= other.toFloat());
}

bool    Fixed::operator==(Fixed const &other)const
{
    return (toFloat() == other.toFloat());
}

bool    Fixed::operator!=(Fixed const &other)const
{
    return (toFloat() != other.toFloat());
}

Fixed   &Fixed::operator++() //pre-increment
{
    ++_value;
    return *this;
}

Fixed   Fixed::operator++(int) //post-increment
{
    Fixed   temp = *this;
    ++_value;
    return temp;
}

Fixed   &Fixed::operator--() //pre-decrement
{
    --_value;
    return *this;
}

Fixed   Fixed::operator--(int) //post-decrement
{
    Fixed temp = *this;
    --_value;
    return temp;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1.toFloat() < fixed2.toFloat())
        return (fixed1);
    return fixed2;
}

Fixed const &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1.toFloat() < fixed2.toFloat())
        return (fixed1);
    return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1.toFloat() > fixed2.toFloat())
        return (fixed1);
    return fixed2;
}

Fixed const &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1.toFloat() > fixed2.toFloat())
        return (fixed1);
    return fixed2;
}

std::ostream &operator<<(std::ostream& o, Fixed const& fixed)
{
    o << fixed.toFloat();
    return o;
}
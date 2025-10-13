/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:02:14 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/13 19:20:23 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const _bits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const input)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const input)
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat(void)const{};

int     Fixed::toInt(void)const{};

Fixed    &Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assigignment operator called" << std::endl;
}

int     Fixed::getRawBits(void)const{};

void   Fixed::setRawBits(int const raw){};

std::ostream &operator<<(std::ostream& o, Fixed const& fixed){};
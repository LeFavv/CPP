/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:47:47 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 12:54:07 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
public:
        Fixed(void);
        Fixed(int const input);
        Fixed(float const input);
        Fixed(Fixed const &copy);
        ~Fixed(void);
        Fixed &operator=(Fixed const &src);
        
        float toFloat(void)const;
        int    toInt(void)const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        //operateurs arithmetiques
        Fixed   operator+(Fixed const &fixed);
        Fixed   operator-(Fixed const &fixed);
        Fixed   operator*(Fixed const &fixed);
        Fixed   operator/(Fixed const &fixed);

        //operateurs de comparaison
        bool   operator>(Fixed const &other)const;
        bool   operator<(Fixed const &other)const;
        bool   operator>=(Fixed const &other)const;
        bool   operator<=(Fixed const &other)const;
        bool   operator==(Fixed const &other)const;
        bool   operator!=(Fixed const &other)const;
        
        //operateurs d'incrementation
        Fixed   &operator++();
        Fixed   operator++(int);
        Fixed   &operator--();
        Fixed   operator--(int);
        
        //min et max
        static Fixed &min(Fixed &fixed1, Fixed &fixed2);
        static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
        
        static Fixed &max(Fixed &fixed1, Fixed &fixed2);
        static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);

private:
        int _value;
        static int const _bits;
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif
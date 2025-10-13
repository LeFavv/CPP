/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:48:47 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/13 19:10:04 by vafavard         ###   ########.fr       */
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
        float toFloat(void)const;
        int    toInt(void)const;
        Fixed &operator=(Fixed const &src);
        int getRawBits(void) const;
        void setRawBits(int const raw);
private:
        int _valueInt;
        static int const _bits;
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif
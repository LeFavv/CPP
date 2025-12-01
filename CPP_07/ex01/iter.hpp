/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:22:41 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/01 12:10:41 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define  ITER_HPP

#include <iostream>
#include <string>
#include <string.h>

template< typename T>
void    iter(T * array, size_t length, void (*f)(T&))
{
    if (!array || !f)
        return ;
    for (size_t i = 0; i < length; i++)
    {
        f(array[i]);
    }
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 14:39:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/06 15:13:07 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template< typename T>
class Array
{
public:
        Array(void);
        Array(unsigned int n);
        Array(Array const &src);
        ~Array(void);
        Array &operator=(Array const &copy);
        
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        
        unsigned int size()const;
private:
        T *_array;
        unsigned int _len;
};

#include "Array.tpp"

#endif
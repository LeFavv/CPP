/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 03:27:21 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/12 04:19:55 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

// template< typename T>
class Span
{
public:
        Span(void);
        Span(unsigned int const N);
        Span(const Span &src);
        ~Span(void);
        Span &operator=(Span const &copy);
        
        int     getMax(void);
        
        void    addNumber(int nb);
        int     shortestSpan(void);
        int     longestSpan(void);
        
        int     findMin(void);
        int     findMax(void);
        
private:
        unsigned int _index;
        unsigned int  _max;
        std::vector<int> _array;

};

#endif
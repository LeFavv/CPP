/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 03:27:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/12 04:19:49 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _max(5), _index(0){}

Span::Span(unsigned int const N)
{
    _max = N;
    _index = 0;
}

Span::Span(Span const &src)
{
    _max = src._max;
    _index = src._index;
    _array = src._array;
}

Span::~Span(void){};

Span    &Span::operator=(Span const &copy)
{
    this->_max = copy._max;
    this->_array = copy._array;
    this->_index = copy._index;
    return (*this);
}

int    Span::getMax(void)
{
    return (this->_max);
}

void    Span::addNumber(int nb)
{
    if (_index < _max)
    {
        _array.push_back(nb);
        _index++;   
    }
    else
        throw std::runtime_error ("Error : Maximum already reached");
}

int Span::findMin(void)
{
    int res = _array[0];
    // std::cout << "value index min: " << _index << std::endl;
    for (unsigned int i = 0; i < _index; i++)
    {
        // std::cout << "Valeur de array a i : " << i << " " << _array[i] << std::endl;
        if (res > _array[i])
            res = _array[i];
    }
    return res;
}


int Span::findMax(void)
{
    int res = _array[0];
    // std::cout << "value index max: " << _index << std::endl;
    for (unsigned int i = 0; i < _index; i++)
    {
        if (res < _array[i])
            res = _array[i];
    }
    return res;
}

int Span::shortestSpan(void)
{
//throw exception if no nb are stored or if there is juste one
    
}

int Span::longestSpan(void)
{
    if (_index <= 1)
        throw std::runtime_error ("Error : Not enough numbers");
    else
    {
        // std::cout << findMin() << std::endl;
        return (findMax() - findMin());
    }
}


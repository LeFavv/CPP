/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 03:27:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/12 06:00:23 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _index(0), _max(5){}

Span::Span(unsigned int const N)
{
    _index = 0;
    _max = N;
}

Span::Span(Span const &src)
{
    _index = src._index;
    _max = src._max;
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
    for (unsigned int i = 0; i < _index; i++)
    {
        if (res > _array[i])
            res = _array[i];
    }
    return res;
}

int Span::findMax(void)
{
    int res = _array[0];
    for (unsigned int i = 0; i < _index; i++)
    {
        if (res < _array[i])
            res = _array[i];
    }
    return res;
}

int Span::shortestSpan(void)
{
    if (_index <= 1)
        throw std::runtime_error("Error : Not enough numbers");

    std::vector<int> tmp(_array.begin(), _array.begin() + _index);

    std::sort(tmp.begin(), tmp.end());

    int minSpan = std::numeric_limits<int>::max();

    for (unsigned int i = 0; i < tmp.size() - 1; i++)
    {
        int diff = tmp[i + 1] - tmp[i];
        if (diff < minSpan)
            minSpan = diff;
    }

    return minSpan;
}


int Span::longestSpan(void)
{
    if (_index <= 1)
        throw std::runtime_error ("Error : Not enough numbers");
    else
        return (findMax() - findMin());
}

void   Span::randpush(void)
{
    _array.resize(_max);

    for (unsigned int i = 0; i < _max; i++)
        _array[i] = rand();

    _index = _max;
}

unsigned int Span::getIndex(void)const
{
    return (this->_index);
}

int Span::getValue(int index)const
{
    return (this->_array[index]);
}

std::ostream &operator<<(std::ostream& os, const Span &s)
{
    for (unsigned int i = 0; i < s.getIndex(); i++)
        os << "i = " << i << " Valeur = " << s.getValue(i) << std::endl;
    return os;
}
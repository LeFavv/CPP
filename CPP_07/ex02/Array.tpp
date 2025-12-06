/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 14:39:08 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/06 15:40:47 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T>
Array<T>::Array() : _array(NULL), _len(0){}

template< typename T>
Array<T>::Array(unsigned int n) : _array(NULL), _len(n)
{
    if (n > 0)
        _array = new T[n]();
}

template< typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template< typename T>
Array<T>::Array(Array const &src): _array(NULL), _len(src._len)
{
    if (src._len > 0)
    {
        _array = new T[_len]();
        for (unsigned int i = 0; i < _len; i++)
            _array[i] = src._array[i];
    }
}

template< typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
    if (this != &copy)
    {
        T *temp = NULL;
        if (copy._len > 0)
        {
            temp = new T[copy._len]();
            for (unsigned int i = 0; i < copy._len; i++)
                temp[i] = copy._array[i];
        }
        delete[] _array;
        _array = temp;
        _len = copy._len;
    }
    return (*this);
}

template<typename T>
T  &Array<T>::operator[](unsigned int index)
{
    if (index >= _len)
        throw std::out_of_range("Out of range");
    return _array[index];
}

template<typename T>
T  const &Array<T>::operator[](unsigned int index)const
{
    if (index >= _len)
        throw std::out_of_range("Out of range");
    return _array[index];
}

template<typename T>
unsigned int Array<T>::size()const
{
    return _len;
}
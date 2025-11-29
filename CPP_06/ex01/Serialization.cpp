/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:02:52 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/29 11:16:31 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t Serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

Serialization::Serialization(void){};

Serialization::~Serialization(void){};

Serialization::Serialization(Serialization const &src)
{
    *this = src;   
}

Serialization &Serialization::operator=(Serialization const &copy)
{
    (void)copy;
    return (*this);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:16 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/21 14:59:58 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog created" << std::endl;
    this->_type = "Dog";
    this->type = this->_type;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    if (this != &src)
    {
        Animal::operator=(src);
        this->_type = src._type;
        this->type = src.type;
    }
    return *this;
}

void    Dog::makeSound(void)const
{
    std::cout << "Dog goes Wouaf" << std::endl;
}


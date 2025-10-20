/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:11 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 18:38:12 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat created" << std::endl;
    this->_type = "cat";
    this->type = this->_type;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    *this = copy;
}

Cat::~Cat(void)
{
    std::cout << "Cat destroyed" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    if (this != &src)
    {
        this->_type = src._type;
        this->type = src.type;
    }
    return *this;
}

void    Cat::makeSound(void)const
{
    std::cout << "Cat goes Meooooooow" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 18:38:15 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal created" << std::endl;
    this->type = "default";
}

Animal::Animal(Animal const &copy)
{
    *this = copy;
}

Animal::~Animal(void)
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal  &Animal::operator=(Animal const &src)
{
    if (this != &src)
        this->type = src.type;
    return *this;
}

void    Animal::makeSound()const
{
    std::cout << this->type << " made a sound" << std::endl;
}

std::string Animal::getType(void)const
{
    return (this->type);
}
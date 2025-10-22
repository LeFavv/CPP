/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:49:37 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 19:00:12 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal created" << std::endl;
    this->type = "Wrong";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    *this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &src)
{
    if (this != &src)
        this->type = src.type;
    return *this;
}

void    WrongAnimal::makeSound()const
{
    std::cout << this->type << " made a wrong sound" << std::endl;
}

std::string WrongAnimal::getType(void)const
{
    return (this->type);
}
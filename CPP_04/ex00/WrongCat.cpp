/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:49:46 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 19:00:23 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat created" << std::endl;
    this->_type = "cat";
    this->type = this->_type;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    if (this != &src)
    {
        this->_type = src._type;
        this->type = src.type;
    }
    return *this;
}

void    WrongCat::makeSound(void)const
{
    std::cout << "WrongCat goes Meooooooow" << std::endl;
}

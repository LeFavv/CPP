/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:16 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/21 14:53:28 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog created" << std::endl;
    this->_type = "Dog";
    this->type = this->_type;
    this->brain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    this->brain = new Brain; // vient d'etre ajoute
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(Dog const &src)
{
    if (this != &src)
    {
        Animal::operator=(src);
        this->_type = src._type;
        this->type = src.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*src.brain);
    }
    return *this;
}

void    Dog::makeSound(void)const
{
    std::cout << "Dog goes Wouaf" << std::endl;
}


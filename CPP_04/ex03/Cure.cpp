/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:40:04 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
    this->_type = "cure";
    // std::cout << "Default constructor called" << std::endl;
}

Cure::~Cure(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria (copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Cure &Cure::operator=(Cure const &src)
{
    if (this != &src)
    {
        AMateria::operator=(src);
        this->_type = src._type;
    }
    return *this;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone()const
{
    return new Cure;  
}
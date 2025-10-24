/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:29 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:39:50 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
    this->_type = "ice";
    // std::cout << "Default constructor called" << std::endl;
}

Ice::~Ice(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria (copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Ice &Ice::operator=(Ice const &src)
{
    if (this != &src)
    {
        AMateria::operator=(src);
        this->_type = src._type;
    }
    return *this;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone()const
{
    return new Ice;  
}
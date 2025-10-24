/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:01 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:20:43 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	// std::cout << "Default constructor AMateria called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	// std::cout << "Constructor AMateria called" << std::endl;
	this->ptype = type;
}

AMateria::AMateria(AMateria const &copy)
{
	// std::cout << "Constructor Copy AMateria called" << std::endl;
	this->ptype = copy.ptype;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this != &src)
		this->ptype = src.ptype;
	return (*this);
}

AMateria::~AMateria(void)
{
	// std::cout << "Default destructor AMateria called" << std::endl;
}

std::string const &AMateria::getType()const
{
	return this->ptype;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "default" << std::endl; // test pour le moment je vais implementer ca dans ice et cure sans doute
}
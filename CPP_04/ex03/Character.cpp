/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:17 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 14:07:57 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Default constructor Character called" << std::endl;
    this->_name = "Robert";
    for (int i = 0; i < 4; i++)
    {
        this->tab[i] = NULL;
    }
}

Character::Character(std::string const &name)
{
    std::cout << "Constructor Character called" << std::endl;
    this->_name = name;
    for (int i = 0; i < 4; i++)
    {
        this->tab[i] = NULL;
    }
}

Character::Character(Character const &copy)
{
    std::cout << "Copy constructor Character called" << std::endl;
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
    {
        this->tab[i] = copy.tab[i];
    }
}

Character &Character::operator=(Character const &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        for (int i = 0; i < 4; i++)
        {
            
            if (tab[i] != NULL)
			{
				delete tab[i];
				tab[i] = NULL;
			}
			if (src.tab[i] != NULL)
				tab[i] = src.tab[i]->clone();
        }
    }
    return (*this);
}

Character::~Character(void)
{
    std::cout << "Default destructor Character called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->tab[i] != NULL)
            delete this->tab[i];
    }
}

std::string const &Character::getName(void)const
{
    return (this->_name);    
}

void    Character::equip(AMateria *m)
{
    if (m == NULL)
    {
        std::cout << "Cannot equip this Materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->tab[i] != NULL)
        {
            tab[i] = m;
            return;
        }
    }
    std::cout << "Cannot equip, inventory full" << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx < 1 || idx > 4)
    {
        std::cout << "Cant unequip, bad index" << std::endl;
        return ;
    }
    if (this->tab[idx - 1] != NULL)
    {
        this->tab[idx - 1] = NULL;
        std::cout << "Materia unequiped" << std::endl;
        return ;
    }
    std::cout << "Nothing to unequip" << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
    if (this->tab[idx - 1] == NULL)
    {
        std::cout << "Nothing to use" << std::endl;
        return ;
    }
    this->tab[idx - 1]->use(target);
}
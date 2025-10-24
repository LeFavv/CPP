/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:43 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:44:51 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->_tab_mat[i] = NULL;
    // std::cout << "Default constructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    for (int i = 0; i < 4; i++)
    {
        this->_tab_mat[i] = NULL;
    }
    *this = copy;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_tab_mat[i] != NULL)
            delete this->_tab_mat[i];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_tab_mat[i] != NULL)
            {
                delete this->_tab_mat[i];
                this->_tab_mat[i] = NULL;
            }
            if (src._tab_mat[i] != NULL)
                this->_tab_mat[i] = src._tab_mat[i]->clone();
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m)
{
    if (m == NULL)
    {
        std::cout << "Cannot learn this Materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_tab_mat[i] == NULL)
        {
            this->_tab_mat[i] = m;
            // std::cout << "Materia learned" << std::endl;
            return;
        }
    }
    std::cout << "Not enough space to learn new Materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_tab_mat[i] && this->_tab_mat[i]->getType() == type)
        {
            // std::cout << "Materia created" << std::endl;
            return (this->_tab_mat[i]->clone());
        }
    }
    std::cout << "No materias of this type found" << std::endl;
    return NULL;
}
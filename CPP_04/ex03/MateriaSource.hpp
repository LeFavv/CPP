/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:46 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:11:06 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaSource : public IMateriaSource
{
private:
        AMateria* _tab_mat[4];
public:
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource(MateriaSource const &copy);
        MateriaSource &operator=(MateriaSource const &src);

        virtual void    learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const &type);
};      

# endif
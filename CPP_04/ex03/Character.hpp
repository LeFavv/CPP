/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:20 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:11:13 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
private:    
        std::string _name;
        AMateria* tab[4]; //not sure
public:
        Character(void);
        Character(std::string const &name);
        Character(Character const &copy);
        ~Character(void);
        
        Character &operator=(Character const &src);
        
        virtual std::string const &getName()const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
        //gerer les materias que j'unequip
};

#endif
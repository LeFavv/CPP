/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:11 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:12:29 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter; // Forward declaration

class AMateria
{
protected:
    std::string ptype;
public:
    AMateria(void);
    AMateria(std::string const & type);
    AMateria(AMateria const &copy);
    AMateria &operator=(AMateria const &src);
    virtual ~AMateria(void);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
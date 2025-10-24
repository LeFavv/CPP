/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:26 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 12:37:06 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
        std::string _type = "cure";
public:
        Cure(void);
        virtual ~Cure(void);
        Cure(Cure const &copy);
        Cure &operator=(Cure const &src);
        
        Cure* clone()const;
        void    use(ICharacter& target);

};

#endif
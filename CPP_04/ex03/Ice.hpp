/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:32 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 15:12:35 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
        std::string _type;
public:
        Ice(void);
        virtual ~Ice(void);
        Ice(Ice const &copy);
        Ice &operator=(Ice const &src);
        
        virtual AMateria* clone()const;
        virtual void    use(ICharacter& target);

};

#endif
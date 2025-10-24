/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:51:32 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/24 12:37:18 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
        std::string _type = "ice";
public:
        Ice(void);
        virtual ~Ice(void);
        Ice(Ice const &copy);
        Ice &operator=(Ice const &src);
        
        Ice* clone()const;
        void    use(ICharacter& target);

};

#endif
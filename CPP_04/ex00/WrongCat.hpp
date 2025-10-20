/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:49:49 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 18:55:30 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
        WrongCat(void);
        WrongCat(WrongCat const &copy);
        ~WrongCat(void);

        WrongCat &operator=(WrongCat const &src);
        
        void makeSound(void)const ;

private:
        std::string  _type;
};

#endif
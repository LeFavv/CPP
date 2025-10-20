/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:14 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 18:37:55 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
        Cat(void);
        Cat(Cat const &copy);
        ~Cat(void);

        Cat &operator=(Cat const &src);
        
        virtual void makeSound(void)const ;

private:
        std::string  _type;
};

#endif
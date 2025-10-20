/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 18:37:49 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
        Dog(void);
        Dog(Dog const &copy);
        ~Dog(void);

        Dog &operator=(Dog const &src);
        
        void makeSound(void)const;

private:
        std::string  _type;
};

#endif
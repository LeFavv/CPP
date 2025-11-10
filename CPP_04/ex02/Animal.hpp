/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:08 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/10 08:56:51 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
public:
        Animal(void);
        Animal(Animal const &copy);
        virtual ~Animal(void);
        Animal &operator=(Animal const &src);
        virtual void makeSound(void)const = 0;
        
        std::string getType(void)const;
protected:
        std::string type;
 };

#endif
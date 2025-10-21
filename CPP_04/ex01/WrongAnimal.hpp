/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:49:43 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/20 18:55:21 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &copy);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &src);
        void makeSound(void)const;
        
        std::string getType(void)const;
protected:
        std::string type;
};

#endif
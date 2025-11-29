/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:02:54 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/29 11:22:33 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include "Data.hpp"
#include <stdint.h>

class Serialization
{
public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        
private:
        Serialization(void);
        Serialization(Serialization const &src);
        ~Serialization(void);
        Serialization &operator=(Serialization const &copy);

};

#endif
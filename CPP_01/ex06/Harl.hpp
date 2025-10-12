/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:07:20 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 21:49:54 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <unistd.h>

class Harl
{
public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
        
private:
        void debug(void); 
        void info(void);
        void warning(void); 
        void error(void);
};

#endif
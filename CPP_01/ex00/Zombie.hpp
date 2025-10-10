/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:08:53 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/10 17:42:56 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
        Zombie(std::string s);
        ~Zombie(void);
        void announce(void)const;
      
        
private:
        std::string _name; 
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
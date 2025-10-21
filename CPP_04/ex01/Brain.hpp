/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:12 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/21 14:32:56 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
public:
        Brain(void);
        Brain(Brain const &copy);
        ~Brain(void);

        Brain &operator=(Brain const &src);

private:
        std::string ideas[100];
};

#endif
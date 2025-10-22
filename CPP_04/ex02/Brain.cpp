/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:23:02 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/21 14:47:44 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    ///msg construction
    std::cout << "Brain construction" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    *this = copy;
}

Brain::~Brain(void)
{
    //msg destruction
    std::cout << "Brain destruction" << std::endl;
}

Brain   &Brain::operator=(Brain const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
        // *this->ideas = *src.ideas; //a check
    return *this;
}
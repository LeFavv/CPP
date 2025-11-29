/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:02:45 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/29 11:06:15 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>

class Data
{
public:
        Data(void);
        Data(Data const &src);
        ~Data(void);
        Data &operator=(Data const &copy);

        std::string name;
        std::string surname;
};

#endif
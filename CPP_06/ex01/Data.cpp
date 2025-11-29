/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:02:43 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/29 11:18:05 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){};

Data::~Data(){};

Data::Data(const Data &src)
{
	*this = src;
}

Data &Data::operator=(const Data &copy)
{
	(void)copy;
	return *this;
}
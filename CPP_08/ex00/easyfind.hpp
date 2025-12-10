/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:37:31 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/10 17:00:03 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP


#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>

template< typename T>
int    easyfind(T const &container, int search)
{
    typename T::const_iterator it;
    it = std::find(container.begin(), container.end(), search );
    if (it != container.end())
        return(std::distance(container.begin(), it));
    else
        throw (std::runtime_error ("Error: No Occurence"));
}

#endif
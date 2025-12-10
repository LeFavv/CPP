/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:37:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/10 16:29:22 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> cont1;
    cont1.push_back(1);
    cont1.push_back(2);
    cont1.push_back(3);
    cont1.push_back(4);
    cont1.push_back(5);

    try
    {
        std::cout << easyfind(cont1, 7) << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        std::cout << easyfind(cont1, 4) << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}
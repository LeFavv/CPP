/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:31:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/13 21:36:49 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat test("test", 150);
        std::cout << test << std::endl;
        test.IncrementGrad();
        std::cout << test << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "ERROR : " << e.what() << '\n';
    }
    
    return (0);
}
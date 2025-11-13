/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:31:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/12 16:27:14 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat test("test", 100);
    std::cout << test << std::endl;
    Bureaucrat test2("test2", 149);
    Bureaucrat test3("test3", 1);
    std::cout << test2 << std::endl;
    test2.IncrementGrad();
    std::cout << test2 << std::endl;
    test2.IncrementGrad();
    std::cout << test2 << std::endl;
    test3.DecrementGrad();
    std::cout << test3 << std::endl;
    return (0);
}
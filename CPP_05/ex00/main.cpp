/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:31:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/12 10:56:06 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat test("test", 100);
    std::cout << test << std::endl;
    Bureaucrat test2("test2", 150);
    test2.IncrementGrad();
    // std::cout << test2 << std::endl;
    return (0);
}
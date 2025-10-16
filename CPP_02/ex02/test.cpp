/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:30:00 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/16 12:32:09 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

bool test(int a, int b)
{
    return (a > b);
}

int main()
{
    int a = 18;
    int b = 3;
    
    if (test(a, b))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return (0); 
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 15:38:43 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/06 16:00:51 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T>
void    ft_display(T &tab)
{
    for (unsigned int i = 0; i < tab.size(); i++)
        std::cout << tab[i] << std::endl;
    std::cout << "\n";
}

int main(void)
{
    std::cout << "================== TEST 1 ==========================\n\n";

    try
    {
        int *a = new int();
        std::cout << "*a = " << *a << std::endl;
        delete a;
        
        Array<int> testInt(6);
        for (int i = 0; i < 6; i++)
            testInt[i] = i;
        ft_display(testInt);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    
    std::cout << "================== TEST 2 ==========================\n\n";
    try
    {
        Array<std::string> testString(3);
        testString[0] = "Hello";
        testString[1] = "Petit";
        testString[2] = "Test";
        ft_display(testString);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    
    std::cout << "================== TEST 4 ==========================\n\n";
    try
    {
        Array<float> testFloat(6);
        for (unsigned int i = 0; i < testFloat.size(); i++)
            testFloat[i] = (float)i + 0.5;
        ft_display(testFloat);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    
    std::cout << "================== TEST 5 ==========================\n\n";
    try
    {
        Array<double> testDouble(6);
        for (unsigned int i = 0; i < testDouble.size(); i++)
            testDouble[i] = (float)i + 0.5;
        ft_display(testDouble);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }
}
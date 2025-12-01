/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:22:45 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/01 13:19:07 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void by_2(int &x)
{
    x +=1;
    x *= 2;
}

template<typename T>
void print_array(T *tab, size_t length)
{
    for (size_t i = 0; i < length; i++)
        std::cout << " " << tab[i] << std::ends;
}

void    Capitalize(char &c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
}

template<typename T>
void    increment(T &value)
{
    value +=1;
}

template<typename T>
void    decrement(T &value)
{
    value -=1;
}

int main(void)
{
    std::cout << "================= TEST 1 ===========================\n\n";
    int test[20];
    for (int i = 0; i < 20; i++)
        test[i] = i;

    ::iter(test, 20, by_2);
    print_array(test, (size_t)20);
    
    std::cout << "\n================= TEST 2 ===========================\n\n";
    std::string test2 = "SAlut a tous les gars ecole 42";
    std::cout << test2 << std::endl;
    ::iter(&test2[0], test2.length(), Capitalize);
    print_array(&test2[0], test2.length());
    
    std::cout << "\n================= TEST 3 ===========================\n\n";
    float test3[20];
    float i = 0.5;
    for (int j = 0; j < 20; j++)
    {
        test3[j] = i + j;
    }        
    ::iter(test3, 20, increment);
    print_array(test3, (size_t)20);

    std::cout << "\n================= TEST 4 ===========================\n\n";
    std::string test4 = "SAlut a tous les gars ecole 42";
    std::cout << test4 << std::endl;
    ::iter(&test4[0], test4.length(), increment);
    print_array(&test4[0], test4.length());
    std::cout << "\n";
    ::iter(&test4[0], test4.length(), decrement);
    print_array(&test4[0], test4.length());
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 03:27:14 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/12 06:21:37 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "=================== SUBJECT TEST ====================" << std::endl;
    Span sp = Span(5);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "=================== TEST 1 ============================" << std::endl;
    
    Span sp1 = Span(10);
    try
    {
        sp1.randpush();
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // std::cout << sp1 << std::endl;
    
    std::cout << "================== TEST 2 ====================" << std::endl;
    
    Span sp2 = Span(100000);
    try
    {
        sp2.randpush();
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // std::cout << sp2 << std::endl;
    
    std::cout << "================= TEST 3 =====================" << std::endl;

    Span sp3 = Span(3);
    try
    {
        sp3.addNumber(-7);
        sp3.addNumber(-10);
        sp3.addNumber(-100);
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "============= TEST 4 ==========================" << std::endl;
    
    Span sp4 = Span(20000);
    try
    {
        sp4.randpush();
        std::cout << sp4.shortestSpan() << std::endl;
        std::cout << sp4.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "=============== TEST 5 ========================" << std::endl;
    
    Span sp5 = Span(5);
    try
    {
        std::cout << sp5.shortestSpan() << std::endl;
        std::cout << sp5.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
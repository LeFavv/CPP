/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 20:04:23 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/29 21:39:07 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <unistd.h>
#include <exception>
#include <iostream>
#include <string>


Base * generate(void);
// It randomly instantiates A, B, or C and returns the instance as a Base pointer. Feel free
// to use anything you like for the random choice implementation.
void identify(Base* p);
//It prints the actual type of the object pointed to by p: "A", "B", or "C".
void identify(Base& p);
// It prints the actual type of the object referenced by p: "A", "B", or "C". Using a pointer
// inside this function is forbidden.

Base *generate(void)
{
    // srand((int)time(NULL));
    
        int test = rand();
        if (test % 2 == 0)
        {
            int test2 = getpid(); 
            if (test2 % 2 == 0)
            {
                A *test = new A;
                return (test);
            }
            else
            {
                B *test = new B;
                return (test);
            }
        }
        else
        {
            C *test = new C;
            return (test);
        }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "p = 'A'" << std::endl;
        return;
    }
    if (dynamic_cast<B*>(p))
    {
        std::cout << "p = 'B'" << std::endl;
        return;
    }
    if (dynamic_cast<C*>(p))
    {
        std::cout << "p = 'C'" << std::endl;
        return;
    }
}

void identify(Base& p)
{
    //necessite d'imbriquer plusieurs blocs try catch entre eux
    try 
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "p = 'A'" << std::endl;
    }
    catch (std::bad_cast&) //ca doit pas etre ca la bonne methode
    {
        try 
        {
            B &b = dynamic_cast<B &>(p);
            std::cout << "p = 'B'" << std::endl;
        }
        catch (std::bad_cast&)
        {
            try 
            {
                C &c = dynamic_cast<C &>(p);
                std::cout << "p = 'C'" << std::endl;
            }
            catch (std::bad_cast&)
            {
                std::cout << "fail" << std::endl;
            }
        }
    }
}

int main(void)
{
    srand(time(NULL));
    
    Base *p = generate();
    identify(p);
    identify(*p);
    delete(p);
}
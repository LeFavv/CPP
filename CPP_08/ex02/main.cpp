/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:49:39 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/17 14:50:01 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <list>

int main()
{
    std::cout << "=================TEST 1 - MUTANTSTATCK ====================" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    
    std::cout << "=================TEST 2 - STD::LIST ====================" << std::endl;
    std::list<int> lst1;
    lst1.push_back(5);
    lst1.push_back(17);
    std::cout << lst1.back() << std::endl;
    lst1.pop_back();
    std::cout << lst1.size() << std::endl;
    lst1.push_back(3);
    lst1.push_back(5);
    lst1.push_back(737);
    lst1.push_back(0);
    std::list<int>::iterator it1 = lst1.begin();
    std::list<int>::iterator ite1 = lst1.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
    std::cout << *it1 << std::endl;
    ++it1;
    }
    std::stack<int> s(mstack);
    return 0;
}
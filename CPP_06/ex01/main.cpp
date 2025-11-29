/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:02:47 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/29 11:38:29 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
    std::cout << "================ TEST 1 SAME =====================\n\n";
    Data *test = new Data;
    Data *test_then;
    
    test->name = "Bernad";
    test->surname = "Fav";

    uintptr_t oui = Serialization::serialize(test);
    std::cout << test << std::endl;
    test_then = Serialization::deserialize(oui);
    std::cout << test_then << std::endl;
    if (test == test_then)
        std::cout << "OK SAME" << std::endl;
    else
        std::cout << "NOPE DIFFERENTS" << std::endl;
    delete test;
    std::cout << "\n================ TEST 2 DIFFERENT =====================\n\n";
    Data *test_2 = new Data;
    Data *test_3 = new Data;
    Data *test_then_2;
        
    test_2->name = "Bernadette";
    test_2->surname = "Fav";
    
    test_3->name = "Valentin";
    test_3->surname = "sasasas";

    uintptr_t test1 = Serialization::serialize(test_3);
    (void)test1;
    std::cout << test_2 << std::endl;
    test_then_2 = Serialization::deserialize(test1);
    std::cout << test_then_2 << std::endl;
    if (test_2 == test_then_2)
        std::cout << "OK SAME" << std::endl;
    else
        std::cout << "NOPE DIFFERENTS" << std::endl;
    delete test;
}
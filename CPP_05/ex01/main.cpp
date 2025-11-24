/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:31:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/24 17:15:06 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << "======================"
    << " TEST 1" << "======================\n" << std::endl;
    try
    {
        Bureaucrat Bernard("Bernard", 18);
        std::cout << Bernard << std::endl;
        Form Formulaire("FormA" , 18, 20);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "\n======================"
    << " TEST 2" << "======================\n" << std::endl;
    try
    {
        Bureaucrat Bernardette("Bernardette", 10);
        Form Formulaire("FormB" , 18, 21);
        std::cout << Bernardette<< std::endl;
        Bernardette.DecrementGrad();
        std::cout << Bernardette<< std::endl;
        Bernardette.IncrementGrad();
        Bernardette.signForm(Formulaire);
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        std::cout << Bernardette<< std::endl;
        Bernardette.DecrementGrad();
        Bernardette.DecrementGrad();
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        std::cout << Bernardette << std::endl;
        std::cout << Formulaire << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "\n======================"
    << " TEST 3" << "======================\n" << std::endl;
    try
    {
        Bureaucrat Bernardette("Bernardette", 17);
        Form Formulaire("FormB" , 18, 10);
        std::cout << Bernardette<< std::endl;
        Bernardette.DecrementGrad();
        std::cout << Bernardette<< std::endl;
        Bernardette.IncrementGrad();
        Bernardette.signForm(Formulaire);
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        std::cout << Bernardette<< std::endl;
        Bernardette.DecrementGrad();
        Bernardette.DecrementGrad();
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        std::cout << Bernardette << std::endl;
        std::cout << Formulaire << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "\n======================"
    << " TEST 4" << "======================\n" << std::endl;
    try
    {
        Bureaucrat Bernardette("Bernardette", 17);
        Form Formulaire("FormB" , 12, 11);
        std::cout << Bernardette<< std::endl;
        Bernardette.DecrementGrad();
        std::cout << Bernardette<< std::endl;
        Bernardette.IncrementGrad();
        Bernardette.signForm(Formulaire);
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        std::cout << Bernardette<< std::endl;
        Bernardette.DecrementGrad();
        Bernardette.DecrementGrad();
        Bernardette.DecrementGrad();
        Bernardette.signForm(Formulaire);
        std::cout << Bernardette << std::endl;
        std::cout << Formulaire << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:13:32 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 15:07:21 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    //Manu signe et execute
    std::cout << "\n================ TEST 1 ==================\n" << std::endl;
    try
    {
        Bureaucrat Manu("Manu", 6);
        PresidentialPardonForm salut("Manu_Form");
        std::cout << salut;
        Manu.signForm(salut);
        Manu.IncrementGrad();
        Manu.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //Brad signe mais ne peux executer
    std::cout << "\n================ TEST 2 ==================\n" << std::endl;
    try
    {
        Bureaucrat Brad("Brad", 10);
        PresidentialPardonForm salut("Brad_Form");
        std::cout << salut;
        Brad.signForm(salut);
        Brad.IncrementGrad();
        Brad.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Jean signe et execute
    std::cout << "\n================ TEST 3 ==================\n" << std::endl;
    try
    {
        Bureaucrat Jean("Jean", 10);
        PresidentialPardonForm salut("Jean_Form");
        std::cout << salut;
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.signForm(salut);
        Jean.IncrementGrad();
        Jean.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Bob signe et execute
    std::cout << "\n================ TEST 4 ==================\n" << std::endl;
    try
    {
        Bureaucrat Bob("Bob", 6);
        RobotomyRequestForm salut("Bob_Form");
        std::cout << salut;
        Bob.signForm(salut);
        Bob.IncrementGrad();
        Bob.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //Bernadette signe mais ne peux executer
    std::cout << "\n================ TEST 5 ==================\n" << std::endl;
    try
    {
        Bureaucrat Bernadette("Bernadette", 10);
        RobotomyRequestForm salut("Bernadette_Form");
        std::cout << salut;
        Bernadette.signForm(salut);
        Bernadette.IncrementGrad();
        Bernadette.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Bernard signe et execute
    std::cout << "\n================ TEST 6 ==================\n" << std::endl;
    try
    {
        Bureaucrat Bernard("Bernard", 10);
        RobotomyRequestForm salut("Bernard_Form");
        std::cout << salut;
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.signForm(salut);
        Bernard.IncrementGrad();
        Bernard.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Gerard signe et execute
    std::cout << "\n================ TEST 7 ==================\n" << std::endl;
    try
    {
        Bureaucrat Gerard("Gerard", 6);
        ShruberryCreationForm salut("Gerard_Form");
        std::cout << salut;
        Gerard.signForm(salut);
        Gerard.IncrementGrad();
        Gerard.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //Albert signe mais ne peux executer
    std::cout << "\n================ TEST 8 ==================\n" << std::endl;
    try
    {
        Bureaucrat Albert("Albert", 10);
        ShruberryCreationForm salut("Albert_Form");
        std::cout << salut;
        Albert.signForm(salut);
        Albert.IncrementGrad();
        Albert.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Gertrude signe et execute
    std::cout << "\n================ TEST 9 ==================\n" << std::endl;
    try
    {
        Bureaucrat Gertrude("Gertrude", 10);
        ShruberryCreationForm salut("Gertrude_Form");
        std::cout << salut;
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.signForm(salut);
        Gertrude.IncrementGrad();
        Gertrude.executeForm(salut);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

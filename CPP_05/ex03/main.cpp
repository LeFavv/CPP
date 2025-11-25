/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:13:32 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 16:46:50 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    //Manu signe et execute
    std::cout << "\n================ TEST 1 ==================\n" << std::endl;
    AForm *salut = NULL;
    try
    {
        Bureaucrat Manu("Manu", 6);
        // PresidentialPardonForm salut("Manu_Form");
        
        Intern test;
        salut = test.makeForm("president", "Manu");
        std::cout << *salut;
        Manu.signForm(*salut);
        Manu.IncrementGrad();
        Manu.executeForm(*salut);
        delete (salut);
        salut = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //Brad signe mais ne peux executer
    std::cout << "\n================ TEST 2 ==================\n" << std::endl;
    AForm *salut1 = NULL;
    try
    {
        Bureaucrat Brad("Brad", 10);
        Intern test;
        salut1 = test.makeForm("president", "Brad");
        std::cout << *salut1;
        Brad.signForm(*salut1);
        Brad.IncrementGrad();
        Brad.executeForm(*salut1);
        delete(salut1);
        salut1 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Jean signe et execute
    std::cout << "\n================ TEST 3 ==================\n" << std::endl;
    AForm *salut2 = NULL;
    try
    {
        Bureaucrat Jean("Jean", 10);
        Intern test;
        salut2 = test.makeForm("president", "Jean");
        std::cout << *salut2;
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.IncrementGrad();
        Jean.signForm(*salut2);
        Jean.IncrementGrad();
        Jean.executeForm(*salut2);
        delete (salut2);
        salut2 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Bob signe et execute
    std::cout << "\n================ TEST 4 ==================\n" << std::endl;
    AForm *salut3 = NULL;
    try
    {
        Bureaucrat Bob("Bob", 6);
        // RobotomyRequestForm salut("Bob_Form");
        Intern test;
        salut3 = test.makeForm("robot", "Bob");
        std::cout << *salut3;
        Bob.signForm(*salut3);
        Bob.IncrementGrad();
        Bob.executeForm(*salut3);
        delete(salut3);
        salut3 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //Bernadette signe mais ne peux executer
    std::cout << "\n================ TEST 5 ==================\n" << std::endl;
    AForm *salut4 = NULL;
    try
    {
        Bureaucrat Bernadette("Bernadette", 10);
        // RobotomyRequestForm salut("Bernadette_Form");
        Intern test;
        salut4 = test.makeForm("robot", "Bernadette");
        std::cout << *salut4;
        Bernadette.signForm(*salut4);
        Bernadette.IncrementGrad();
        Bernadette.executeForm(*salut4);
        delete (salut4);
        salut4 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Bernard signe et execute
    std::cout << "\n================ TEST 6 ==================\n" << std::endl;
    AForm *salut5 = NULL;
    try
    {
        Bureaucrat Bernard("Bernard", 10);
        // RobotomyRequestForm salut("Bernard_Form");
        Intern test;
        salut5 = test.makeForm("robot", "Bernard");
        std::cout << *salut5;
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.IncrementGrad();
        Bernard.signForm(*salut5);
        Bernard.IncrementGrad();
        Bernard.executeForm(*salut5);
        delete(salut5);
        salut5 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Gerard signe et execute
    std::cout << "\n================ TEST 7 ==================\n" << std::endl;
    AForm *salut6 = NULL;
    try
    {
        Bureaucrat Gerard("Gerard", 6);
        // ShruberryCreationForm salut("Gerard_Form");
        Intern test;
        salut6 = test.makeForm("shrubbery", "Gerard");
        std::cout << *salut6;
        Gerard.signForm(*salut6);
        Gerard.IncrementGrad();
        Gerard.executeForm(*salut6);
        delete (salut6);
        salut6 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //Albert signe mais ne peux executer
    std::cout << "\n================ TEST 8 ==================\n" << std::endl;
    AForm *salut7 = NULL;
    try
    {
        Bureaucrat Albert("Albert", 10);
        // ShruberryCreationForm salut("Albert_Form");
        Intern test;
        salut7 = test.makeForm("shrubbery", "Albert");
        std::cout << *salut7;
        Albert.signForm(*salut7);
        Albert.IncrementGrad();
        Albert.executeForm(*salut7);
        delete (salut7);
        salut7 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //Gertrude signe et execute
    std::cout << "\n================ TEST 9 ==================\n" << std::endl;
    AForm *salut8 = NULL;
    try
    {
        Bureaucrat Gertrude("Gertrude", 10);
        // ShruberryCreationForm salut("Gertrude_Form");
        Intern test;
        salut8 = test.makeForm("shrubbery", "Gertrude");
        std::cout << *salut8;
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.IncrementGrad();
        Gertrude.signForm(*salut8);
        Gertrude.IncrementGrad();
        Gertrude.executeForm(*salut8);
        delete(salut8);
        salut8 = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:22:40 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 15:46:25 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void){};

Intern::Intern(Intern const &src)
{
    *this = src;   
}

Intern::~Intern(void){};

Intern  &Intern::operator=(Intern const &copy)
{
    (void)copy;
    return (*this);
}

AForm*   Intern::makeForm(std::string formName, std::string target)
{
    std::string tab[3] = {"president", "robot", "shrubbery"};
    int i = 0;
    while (i < 3 && tab[i] != formName)
        i++;
    switch (i)
    {
        case 0 :
                std::cout << "Intern creates " << formName << std::endl;
                return (new PresidentialPardonForm(target));
        case 1 :
                std::cout << "Intern creates " << formName << std::endl;
                return (new RobotomyRequestForm(target));
        case 2 :
                std::cout << "Intern creates " << formName << std::endl;
                return (new ShruberryCreationForm(target));
        default :
                std::cout << "Error : Intern Failed to Create" << std::endl;
                return (NULL);
        
    }
}
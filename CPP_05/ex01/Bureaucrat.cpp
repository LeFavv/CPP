/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:37:22 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/12 16:29:45 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default")
{
    std::cout << "Default constructor called" << std::endl;
    this->_grade = 75;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    this->_grade = grade;
    std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) :_name(src.GetName() + "_copy")
{
    std::cout << "Copy Constructor called" << std::endl;
    this->_grade = src.GetGrade();
}

Bureaucrat     &Bureaucrat::operator=(Bureaucrat const &copy)
{
    this->_grade = copy.GetGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Destructor called" << std::endl;
}

const std::string Bureaucrat::GetName(void)const
{
    return (this->_name);
}

int Bureaucrat::GetGrade(void)const
{
    return (this->_grade);
}

void    Bureaucrat::IncrementGrad(void)
{
    try
    {
        if (this->_grade > 1)
            this->_grade--;
           else
            throw Bureaucrat::GradeTooHightException();
    }
    catch(Bureaucrat::GradeTooHightException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::DecrementGrad(void)
{
    try
    {
        if (this->_grade < 150)
            this->_grade++;
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &b)
{
    os << b.GetName() << ", bureaucrat grade " << b.GetGrade();
    return os;
}

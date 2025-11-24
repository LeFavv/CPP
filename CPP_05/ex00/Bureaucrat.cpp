/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:37:22 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/24 17:00:08 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default")
{
    this->_grade = 75;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHightException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) :_name(src.GetName() + "_copy")
{
    this->_grade = src.GetGrade();
}

Bureaucrat     &Bureaucrat::operator=(Bureaucrat const &copy)
{
    this->_grade = copy.GetGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void){};

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
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHightException();
    this->_grade--;
}

void    Bureaucrat::DecrementGrad(void)
{
    if (this->_grade >= 150)
       throw Bureaucrat::GradeTooLowException(); 
    this->_grade++;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &b)
{
    os << b.GetName() << ", bureaucrat grade " << b.GetGrade();
    return os;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *Bureaucrat::GradeTooHightException::what() const throw()
{
	return ("Grade too high");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:00:51 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/22 03:31:25 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _GradeExec(105), _GradeSign(100), _name("default"), Bureaucrat()
{
	this->_IfSigned = false;
}

Form::Form(std::string name, int GradeSign, int GradeExec) : _GradeExec(GradeExec), _GradeSign(GradeSign), _name(name), Bureaucrat(name, 40)
{
	this->_IfSigned = false;
}



const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *Form::GradeTooHightException::what() const throw()
{
	return ("Grade too high");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:00:51 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/24 16:57:24 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _IfSigned(false), _GradeSign(100), _GradeExec(105)
{
	// this->_IfSigned = false;
}

Form::Form(std::string name, int GradeSign, int GradeExec) : _name(name) , _IfSigned(false),  _GradeSign(GradeSign), _GradeExec(GradeExec)
{
	if (this->_GradeExec < 1 || this->_GradeSign < 1)
		throw GradeTooHightException();
	if (this->_GradeExec > 150 || this->_GradeSign > 150)
		throw GradeTooLowException();
	this->_IfSigned = false;
}

int	Form::getGradeSign(void)const
{
	return (this->_GradeSign);
}

int	Form::getGradeExec(void)const
{
	return (this->_GradeExec);
}

bool	Form::getIfSigned(void)const
{
	return (this->_IfSigned);
}

Form::~Form(void){};

Form::Form(Form const &src) : _name(src.getName()), 
_IfSigned(src.getIfSigned()), _GradeSign(src.getGradeSign()),
_GradeExec(src.getGradeExec())
{

}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.GetGrade() <= this->_GradeSign)
		this->_IfSigned = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *Form::GradeTooHightException::what() const throw()
{
	return ("Grade too high");
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream& os, const Form &form)
{
	std::cout << form.getName() << " signed : " << (form.getIfSigned() ? "Yes" : "No")
	<< "Grade to Sign : " << form.getGradeSign() << " Grade to Exec : " << form.getGradeExec() << std::endl; 
    return os;
}
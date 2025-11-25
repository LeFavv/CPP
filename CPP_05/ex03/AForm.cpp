/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:00:51 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 12:14:35 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _IfSigned(false), _GradeSign(100), _GradeExec(105)
{
	// this->_IfSigned = false;
}

AForm::AForm(std::string name, int GradeSign, int GradeExec) : _name(name) , _IfSigned(false),  _GradeSign(GradeSign), _GradeExec(GradeExec)
{
	if (this->_GradeExec < 1 || this->_GradeSign < 1)
		throw GradeTooHightException();
	if (this->_GradeExec > 150 || this->_GradeSign > 150)
		throw GradeTooLowException();
	this->_IfSigned = false;
}

int	AForm::getGradeSign(void)const
{
	return (this->_GradeSign);
}

int	AForm::getGradeExec(void)const
{
	return (this->_GradeExec);
}

bool	AForm::getIfSigned(void)const
{
	return (this->_IfSigned);
}

AForm::~AForm(void){};

AForm::AForm(AForm const &src) : _name(src.getName()), 
_IfSigned(src.getIfSigned()), _GradeSign(src.getGradeSign()),
_GradeExec(src.getGradeExec())
{

}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.GetGrade() <= this->_GradeSign)
		this->_IfSigned = true;
	else
		throw GradeTooLowException();
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *AForm::GradeTooHightException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("Form not signed");
}

const char *AForm::TooLowToExec::what() const throw()
{
	return ("Grade too low to exec");
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream& os, const AForm &form)
{
	std::cout << form.getName() << " signed : " << (form.getIfSigned() ? "Yes" : "No")
	<< "Grade to Sign : " << form.getGradeSign() << " Grade to Exec : " << form.getGradeExec() << std::endl; 
    return os;
}
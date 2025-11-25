/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:46:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 13:04:29 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5), _target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &source)
{
    *this = source;
}

PresidentialPardonForm::~PresidentialPardonForm(void){};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
    if (this != &copy)
        this->_IfSigned = copy._IfSigned;
    return (*this);
}

std::string PresidentialPardonForm::GetTarget(void)const
{
    return (this->_target);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
    if (this->getIfSigned() == 0)
        throw AForm::NotSignedException();
    else if (executor.GetGrade() > this->getGradeExec())
        throw AForm::TooLowToExec();
    else
        std::cout << GetTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream &operator<<(std::ostream& os, const PresidentialPardonForm &form)
{
	std::cout << form.getName() << " signed : " << (form.getIfSigned() ? "Yes" : "No")
	<< "Grade to Sign : " << form.getGradeSign() << " Grade to Exec : " << form.getGradeExec() << std::endl; 
    return os;
}
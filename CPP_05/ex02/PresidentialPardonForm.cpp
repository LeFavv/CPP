/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:46:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 12:11:20 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardon::PresidentialPardon() : AForm("Default", 25, 5), _target("Default"){}

PresidentialPardon::PresidentialPardon(std::string target) : AForm(target, 25, 5), _target(target){}

PresidentialPardon::PresidentialPardon(PresidentialPardon const &source)
{
    *this = source;
}

PresidentialPardon::~PresidentialPardon(void){};

PresidentialPardon &PresidentialPardon::operator=(PresidentialPardon const &copy)
{
    if (this != &copy)
        this->_IfSigned = copy._IfSigned;
    return (*this);
}

std::string PresidentialPardon::GetTarget(void)const
{
    return (this->_target);
}

void    PresidentialPardon::execute(Bureaucrat const &executor)const
{
    if (this->getIfSigned() == 0)
        throw AForm::NotSignedException();
    else if (executor.GetGrade() > this->getGradeExec())
        throw AForm::TooLowToExec();
    else
        std::cout << GetTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:46:24 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 13:05:36 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45), _target("Default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &source)
{
    *this = source;
}

RobotomyRequestForm::~RobotomyRequestForm(void){};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
    if (this != &copy)
        this->_IfSigned = copy._IfSigned;
    return (*this);
}

std::string RobotomyRequestForm::GetTarget(void)const
{
    return (this->_target);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
    if (this->getIfSigned() == 0)
        throw AForm::NotSignedException();
    else if (executor.GetGrade() > this->getGradeExec())
        throw AForm::TooLowToExec();
    else
    {
        srand((int)time(NULL));
    
        int test = rand();
        if (test % 2 == 0)
            std::cout << GetTarget() << " has been robotomized" << std::endl;
        else
            std::cout << GetTarget() << " Robotomy failed" << std::endl;
    }
}

std::ostream &operator<<(std::ostream& os, const RobotomyRequestForm &form)
{
	std::cout << form.getName() << " signed : " << (form.getIfSigned() ? "Yes" : "No")
	<< "Grade to Sign : " << form.getGradeSign() << " Grade to Exec : " << form.getGradeExec() << std::endl; 
    return os;
}
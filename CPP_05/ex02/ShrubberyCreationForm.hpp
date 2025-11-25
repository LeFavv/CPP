/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:46:32 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 13:04:15 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShruberryCreationForm : public AForm
{
public:
        ShruberryCreationForm();
        ShruberryCreationForm(std::string target);
        ShruberryCreationForm(ShruberryCreationForm const &source);
        virtual ~ShruberryCreationForm();
        ShruberryCreationForm &operator=(ShruberryCreationForm const &copy);
        
        std::string GetTarget(void)const;

        void execute(Bureaucrat const &executor)const;
private:
        std::string const _target;
};

std::ostream& operator<<(std::ostream& os, const ShruberryCreationForm &form);

#endif
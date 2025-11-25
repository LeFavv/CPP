/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:46:21 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 12:06:32 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardon : public AForm
{
public:
        PresidentialPardon();
        PresidentialPardon(std::string target);
        PresidentialPardon(PresidentialPardon const &source);
        virtual ~PresidentialPardon();
        PresidentialPardon &operator=(PresidentialPardon const &copy);
        
        std::string GetTarget(void)const;

        void execute(Bureaucrat const &executor)const;
private:
        std::string const _target;
};

std::ostream& operator<<(std::ostream& os, const AForm &form);

#endif
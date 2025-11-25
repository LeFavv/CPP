/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:16:08 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 15:51:33 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;

class Intern
{
public:
        Intern(void);
        Intern(Intern const &src);
        virtual ~Intern();
        Intern &operator=(Intern const &copy);
        
        AForm* makeForm(std::string formName, std::string target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:22:39 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 14:10:20 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
    
public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    virtual ~Bureaucrat(void);
    Bureaucrat &operator=(Bureaucrat const &copy);
    
    const std::string GetName(void)const;
    int GetGrade(void)const;

    void    IncrementGrad(void);
    void    DecrementGrad(void);
    void    signForm(AForm &form);
    
    void executeForm(AForm const & form) const;
    
class GradeTooHightException : public std::exception
{
public :
    virtual const char *what() const throw();
};

class GradeTooLowException : public std::exception
{
public :
    virtual const char *what() const throw();
};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);

#endif
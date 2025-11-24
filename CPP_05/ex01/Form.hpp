/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:00:54 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/24 14:14:03 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
        Form(void);
        Form(std::string name, int GradeSign, int GradeExec);
        Form(Form const &src);
        Form &operator=(Form const &copy);
        ~Form(void);
        
        void    beSigned(Bureaucrat &b);
        
        int getGradeSign(void)const;
        int getGradeExec(void)const;
        bool    getIfSigned(void)const;
        std::string getName(void)const;

private:
        std::string const _name;
        bool    _IfSigned;
        int const _GradeSign;
        int const _GradeExec;


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

std::ostream& operator<<(std::ostream& os, const Form &form);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:00:54 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/13 22:45:12 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
public:
        Form(void);
        Form(std::string name, int GradeSign, int GradeExec);
        Form(Form const &src);
        Form &operator=(Form const &copy);
        ~Form(void);


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

std::ostream& operator<<(std::ostream& os, const Form &f);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:00:54 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 12:13:15 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
        AForm(void);
        AForm(std::string name, int GradeSign, int GradeExec);
        AForm(AForm const &src);
        AForm &operator=(AForm const &copy);
        virtual ~AForm(void);
        
        void    beSigned(Bureaucrat &b);
        
        int getGradeSign(void)const;
        int getGradeExec(void)const;
        bool    getIfSigned(void)const;
        std::string getName(void)const;
        
        virtual void execute(Bureaucrat const &executor) = 0;

protected:
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

class TooLowToExec: public std::exception
{
public :
    virtual const char *what() const throw();
};

class NotSignedException : public std::exception
{
public :
    virtual const char *what() const throw();
};
};

std::ostream& operator<<(std::ostream& os, const AForm &form);

#endif
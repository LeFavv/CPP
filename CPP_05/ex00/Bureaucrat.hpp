/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:22:39 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/12 10:38:20 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
    
public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat(void);
    Bureaucrat &operator=(Bureaucrat const &copy);
    
    const std::string GetName(void)const;
    int GetGrade(void)const;

    void    IncrementGrad(void);
    void    DecrementGrad(void);

class GradeTooHightException : public std::exception
{
public :
    virtual const char *what() const throw()
    {
        return ("Grade too hight");
    }
};

class GradeTooLowException : public std::exception
{
public :
    virtual const char *what() const throw()
    {
        return ("Grade too low");
    }
};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);
// {
//     os << b.GetName() << ", bureaucrat grade " << b.GetGrade() << std::endl;
//     return os;
// }
// <name>, bureaucrat grade <grade>

#endif
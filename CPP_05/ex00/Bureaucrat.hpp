/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:22:39 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/11 15:41:47 by vafavard         ###   ########.fr       */
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
    Bureaucrat(std::string name);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat(void);
    Bureaucrat &operator=(Bureaucrat const &copy);

};

#endif
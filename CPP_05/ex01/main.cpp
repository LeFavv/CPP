/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:31:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/24 16:42:35 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat Bernard("Bernard", 18);
        std::cout << Bernard << std::endl;
        Form Formulaire("FormA" , 18, 20);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

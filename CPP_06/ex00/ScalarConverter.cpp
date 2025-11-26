/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:02:55 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/26 14:53:05 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//ordre d'affichage des valeurs
// char
// int
// float
// double
// std::strtol (pour int et char du coup)
// std::strtof (float)
// std::strtod (double)

void    ToInt(char const * value)
{
    char    *end;
    int    result;
    result = std::strtol(value, &end, 10);
    if (!(end))
    {
        std::cout << "int: impossible" << std::endl;
        return ;
    }
    std::cout << "int: " << result << std::endl;
}

void    ToChar(char const * value)
{
    char    *end;
    char    result;
    
    result = std::strtol(value, &end, 10);
    if (!(end) || result <= 0)
    {
        std::cout << "char: impossible" << std::endl;
        return ;
    }
    std::cout << "char: " << result << std::endl;
}

void    ToFloat(char const * value)
{
    char    *end;
    float   result;
    result = std::strtof(value, &end);
    if (!(end))
    {
        std::cout << "float: impossible" << std::endl;
        return ;
    }
    printf("float: %.1ff\n", result);
}

void    ToDouble(char const * value)
{
    char    *end;
    double  result;
    
    result = std::strtod(value, &end);
    if (!(end))
    {
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    printf("Double: %.1f\n", result);
}

int value_type(char const *value)
{
    
}

void ScalarConverter::converter(char const * value)
{
    ToChar(value);
    ToInt(value);
    ToFloat(value);
    ToDouble(value);
    
    int order = value_type(value);
}
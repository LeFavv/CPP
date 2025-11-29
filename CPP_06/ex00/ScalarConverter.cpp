/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:02:55 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/29 10:27:09 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){};

ScalarConverter::~ScalarConverter(){};

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return *this;
}
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

bool    IsNum(char c)
{
    if (c >= '0' && c <= '9')
        return (true);
    return (false);
}

bool    IsDot(char c)
{
    if (c == '.')
        return (true);
    return (false);
}

bool IsInt(std::string value)
{
    for (int i = 0; value[i]; i++)
    {
        if (!IsNum(value[i]))
            return (false);
    }
    return (true);
}

bool    IsFloat(std::string value)
{
    int DotCount = 0;
     
    for (int i = 0; value[i]; i++)
    {
        if (!IsNum(value[i]))
        {
            if (IsDot(value[i]))
                DotCount += 1;
            else if (i == (int)(value.size()) && value[i] != 'f')
                return (false);
        }
    }
    if (DotCount != 1)
        return (false);
    return (true);
}

bool    IsDouble(std::string value)
{
    int DotCount = 0;
     
    for (int i = 0; value[i]; i++)
    {
        if (!IsNum(value[i]))
        {
            if (IsDot(value[i]))
                DotCount += 1;
            else
                return (false);
        }
    }
    if (DotCount != 1)
        return (false);
    return (true);
}

bool IsChar(std::string value)
{
    if (value.size() == 1 && IsNum(value[0]))
        return (true);
    return (false);
}

void    convertInt(std::string value)
{
    char *end;
    char *end2;
    int result = std::strtol(value.c_str(), &end, 10);
    float result2 = std::strtof(value.c_str(), &end2);
    
    if (!(result < 0 || result > 127))
    {
        if (!(result >= 32 && result <= 126))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << "'" << static_cast<char>(result) << "'" << std::endl;
    }
    else 
        std::cout << "char: impossible" << std::endl;
    if (result2 < INT_MIN || result2 > INT_MAX)
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    else
    {
        std::cout << "int: " << result << std::endl;
        std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
    }
}

void    convertFloat(std::string value)
{
    char *end;
    float result = std::strtof(value.c_str(), &end);
    
    if (!(result < 0 || result > 127))
    {
        if (!(result >= 32 && result <= 126))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << "'" << static_cast<char>(result) << "'" << std::endl;
    }
    else 
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    if (result == static_cast<int>(result))
    {
        std::cout << "float: " << result << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << result << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(result) << std::endl;
    }
}

void    convertDouble(std::string value)
{
    char *end;
    float result = std::strtod(value.c_str(), &end);
    
    if (!(result < 0 || result > 127))
    {
        if (!(result >= 32 && result <= 126))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << "'" << static_cast<char>(result) << "'" << std::endl;
    }
    else 
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    if (result == static_cast<int>(result))
    {
        std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
        std::cout << "double: " << result << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
        std::cout << "double: " << result << std::endl;
    }
}

void    convertChar(std::string value)
{
    int result = value[0];
    
    if ((result >= 0 && result <= 127))
    {
        if (!(result >= 32 && result <= 126))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << "'" << static_cast<char>(result) << "'" << std::endl;
    }
    else 
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << result << std::endl;
    std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
}

void    convertElse(std::string value)
{
    char *end;
    
    if (value == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (value == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (value == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << strtof(value.c_str(), &end) << "f" <<std::endl;
		std::cout << "double: " << strtod(value.c_str(), &end) << std::endl;
    }
    else if (value == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << strtof(value.c_str(), &end) << "f" <<std::endl;
		std::cout << "double: " << strtod(value.c_str(), &end) << std::endl;
    }
    else if (value == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << strtof(value.c_str(), &end) << "f" <<std::endl;
		std::cout << "double: " << strtod(value.c_str(), &end) << std::endl;
    }
    else if (value == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << strtof(value.c_str(), &end) << "f" <<std::endl;
		std::cout << "double: " << strtod(value.c_str(), &end) << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    
    
}

void ScalarConverter::converter(std::string value)
{  
    if (IsChar(value))
        convertChar(value);
    else if (IsInt(value))
        convertInt(value);
    else if (IsFloat(value))
        convertFloat(value);
    else if (IsDouble(value))
        convertDouble(value);
    else
        convertElse(value);
}
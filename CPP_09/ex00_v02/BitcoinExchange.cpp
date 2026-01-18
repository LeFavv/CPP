/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 08:42:47 by vafavard          #+#    #+#             */
/*   Updated: 2026/01/18 15:58:12 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string.h>

std::map<std::string, float> BitcoinExchange::_rates;
std::map<std::string, float> BitcoinExchange::_ratesValue;

BitcoinExchange::BitcoinExchange(void){};

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy){}

BitcoinExchange::~BitcoinExchange(void){};

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src){return *this;};


std::string truncateDate(std::string buffer)
{
    std::string date;
    int i = 0;
    int j = 0;
    
    while (buffer[i])
    {
        if (buffer[i] == ',')
            j = i;
        i++;
    }
    i -= j;
    date = buffer.substr(0, j);
    return date;
}

double  truncateExchangeRate(std::string buffer)
{
    double  exchangeRate;
    int i = 0;
    int j = 0;
    while (buffer[i])
    {
        if (buffer[i] == ',')
            j = i;
        i++;
    }
    i -= j;
    std::string temp = buffer.substr(j + 1, i);
    exchangeRate = atof(temp.c_str());
    return exchangeRate;
}

float  truncateValue(std::string buffer)
{
    double  value;
    int i = 0;
    int j = 0;
    while (buffer[i])
    {
        if (buffer[i] == '|')
            j = i;
        i++;
    }
    i -= j;
    std::string temp = buffer.substr(j + 1, i);
    value = atof(temp.c_str());
    return value;
}

void BitcoinExchange::storeData(void)
{
    std::ifstream infile;
    std::string     buffer;
    std::string     date;
    float          exchangeRate;
    
    infile.open("data.csv");
    if (infile.is_open() == true)
    {
        while(std::getline(infile, buffer))
        {
            date = truncateDate(buffer);
            exchangeRate = truncateExchangeRate(buffer);
            if (date != "date")
                _rates[date] = exchangeRate;
        }
    }
    else
    {
        std::cerr << "ERROR CANNOT OPEN FILE" << std::endl;
    }
    infile.close();
}

void BitcoinExchange::storeInput(std::string str)
{
    std::ifstream infile;
    std::string     buffer;
    std::string     date;
    float          exchangeRate;
    
    infile.open(str.c_str());
    if (infile.is_open() == true)
    {
        while(std::getline(infile, buffer))
        {
            date = truncateDate(buffer);
            exchangeRate = truncateValue(buffer);
            if (date != "date")
                _ratesValue[date] = exchangeRate;
        }
    }
    else
    {
        std::cerr << "ERROR CANNOT OPEN FILE" << std::endl;
    }
    infile.close();
}

bool    dateForm(std::string date)
{
    int i = 0;
    while (i < 4)
    {
        if (isdigit(date[i]))
            i++;
        else
            return (false);
    }
    if (date[4] != '-')
        return false;
    i++;
    while (i < 7)
    {
        if (isdigit(date[i]))
            i++;
        else
            return (false);
    }
    if (date[7] != '-')
        return false;
    i++;
    while (i < 10)
    {
        if (isdigit(date[i]))
            i++;
        else
            return (false);
    }
    return true;
}

bool    controlDate(std::string date)
{
    std::string yearStr;
    std::string monthStr;
    std::string dayStr;
    
    int year;
    int month;
    int day;
    if (strlen(date.c_str()) != 10)
        return false;
    if (!dateForm(date))
        return false;
    yearStr = date.substr(0, 4);
    monthStr = date.substr(5, 2);
    dayStr = date.substr(8, 2);
    year = atoi(yearStr.c_str());
    if (year <= 0 || year >= 2100)
        return false;
    month = atoi(monthStr.c_str());
    if (month < 1 || month > 12)
        return false;
    day = atoi(dayStr.c_str());
    if (day <= 0 || day > 31)
        return false;
    int maxDay;
    switch (month)
    {
        case 2:
        {
            if (year % 4 == 0)
                maxDay = 29;
            else 
                maxDay = 28;
            break;
        }
        case 4: case 6: case 9: case 11:
        {
            maxDay = 30;
            break;
        }
           
        default:
            maxDay = 31;
    }
    if (day > maxDay)
        return false;
    return true;
    //ajouter des controls plus specifiques
    //01, 03, 05, 07, 08, 10 et 12 ont 31 jours
    //04, 06, 09 et 11 comptent 30 jours
    //02 28 jours ou 29 si bissexctile
}

// void    BitcoinExchange::storing(std::string const filename)
// {
//     std::map<std::string, float> test1; //string pour la date et double pour le taux de change
//     std::ifstream infile;
//     std::string     buffer;
//     std::string     date;
//     std::string     valueStr;
//     float           value;
//     int             Year;
//     int             Month;
//     int             Day;
    
//     infile.open(filename.c_str());
//     if (infile.is_open() == true)
//     {
//         while(std::getline(infile, buffer))
//         {
//             date = truncateDate(buffer);
//             if (!controlDate(date))
//                 throw std::runtime_error ("Error: Bad input date" + date);
//             value = truncateExchangeRate(buffer);
//             if (date != "date")
//                 test1.insert({date, value});
//         }
//         std::map<std::string, float>::const_iterator it;
//         for (it = test1.begin(); it != test1.end(); it++)
//         {
//             std::cout << it->first << " " << it->second << std::endl;
//         }
//     }
//     else
//     {
//         std::cerr << "ERROR CANNOT OPEN FILE" << std::endl;
//     }
// }

//check les values 
//value entre 0 et 1000 inclus (de type float)

//Je recupere le tableau d'input et le stock
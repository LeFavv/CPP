/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/23 22:09:44 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){};

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy){}

BitcoinExchange::~BitcoinExchange(void){};

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src){};


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
    // std::cout << date << std::endl;
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

void storeData(void)
{
    std::map<std::string, float> test1; //string pour la date et double pour le taux de change
    std::ifstream infile;
    std::string     buffer;
    std::string     date;
    double          exchangeRate;
    
    infile.open("data.csv");
    if (infile.is_open() == true)
    {
        while(std::getline(infile, buffer))
        {
            // std::cout << buffer << std::endl;
            date = truncateDate(buffer);
            // std::cout << date << std::cout;
            exchangeRate = truncateExchangeRate(buffer);
            // std::cout << exchangeRate << std::endl;
            if (date != "date")
                test1.insert({date, exchangeRate});
            // std::cout << test1 << std::endl;
        }
        std::map<std::string, float>::const_iterator it;
        for (it = test1.begin(); it != test1.end(); it++)
        {
            std::cout << it->first << " " << it->second << std::endl;
        }
    }
    else
    {
        std::cerr << "ERROR CANNOT OPEN FILE" << std::endl;
    }
}

bool    controlDate(std::string date)
{
    std::string yearStr;
    std::string monthStr;
    std::string dayStr;
    
    int year;
    int month;
    int day;
    int i = 0;
    int j = 0;
    int flag = 0; 
    while (date[i])
    {
        if (date[i] == '-')
        {
            j = i;
            i -= j;
            if (flag == 0)
                std::string yearStr = date.substr(j + 1, i);
            else if (flag == 1)
                std::string monthStr = date.substr(j + 1, i);
            else if (flag == 2)
                std::string monthStr = date.substr(j + 1, i);
            flag++;
        }
            // j = i;
        i++;
    }
    year = atoi(yearStr.c_str());
    if (year <= 0 || year >= 2100)
        return false;
    month = atoi(monthStr.c_str());
    if (month < 1 || month > 12)
        return false;
    day = atoi(dayStr.c_str());
    if (day <= 0 || day > 31)
        return false;
        
    //degrossi puis verifier en detail si la date est ok
}

void    BitcoinExchange::storing(std::string const filename)
{
    std::map<std::string, float> test1; //string pour la date et double pour le taux de change
    std::ifstream infile;
    std::string     buffer;
    std::string     date;
    std::string     valueStr;
    float           value;
    int             Year;
    int             Month;
    int             Day;
    
    infile.open(filename.c_str());
    if (infile.is_open() == true)
    {
        while(std::getline(infile, buffer))
        {
            date = truncateDate(buffer);
            if (!controlDate(date))
                throw std::runtime_error ("Error: Bad input date");
            //test la date et throw une exception si besoin
            value = truncateExchangeRate(buffer);
            if (date != "date")
                test1.insert({date, value});
        }
        std::map<std::string, float>::const_iterator it;
        for (it = test1.begin(); it != test1.end(); it++)
        {
            std::cout << it->first << " " << it->second << std::endl;
        }
    }
    else
    {
        std::cerr << "ERROR CANNOT OPEN FILE" << std::endl;
    }
}


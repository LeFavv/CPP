/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/23 21:55:14 by vafavard         ###   ########.fr       */
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


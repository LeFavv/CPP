/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:12 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/18 15:21:23 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>

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

int main(void)
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
        for (auto& pair:test1)
        {
            std::cout << pair.first << " " << pair.second << std::endl;
        }
    }
    else
    {
        std::cerr << "ERROR CANNOT OPEN FILE" << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:12 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/18 16:23:49 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>

//Pas necessaire de verifier le .csv car tout doit etre OK logiquement
//Utiliser la meme logique pour check l'input mais pousser un peu plus la verifications des donnees (voir fichier test.txt pour les verifs a faire)

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
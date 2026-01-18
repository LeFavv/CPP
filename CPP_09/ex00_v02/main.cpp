/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:12 by vafavard          #+#    #+#             */
/*   Updated: 2026/01/18 13:36:08 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include "BitcoinExchange.hpp"

//Pas necessaire de verifier le .csv car tout doit etre OK logiquement
//Utiliser la meme logique pour check l'input mais pousser un peu plus la verifications des donnees (voir fichier test.txt pour les verifs a faire)

//Je recupere la data je dois maintenant faire la meme chose pour l'input 
//Bien check tousnles cas d'erreurs possibles 

//infile doit etre au format date | value
//et date doit etre au format Year-Month-Day le tout separe par des espace -- > split avec | pour avoir les deux chaines 
//puis split la premiere chaine pour separer les trois valeurs --> faire un atol et verifier que ca colle aux dates possibles

//fonction storing

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
            date = truncateDate(buffer);
            exchangeRate = truncateExchangeRate(buffer);
            if (date != "date")
                test1.insert({date, exchangeRate});
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
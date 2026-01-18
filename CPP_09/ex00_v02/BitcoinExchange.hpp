/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:09 by vafavard          #+#    #+#             */
/*   Updated: 2026/01/18 15:56:19 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>

class BitcoinExchange
{
public:
        // void    storing(std::string const filename);
        static void    storeData(void);
       static void    storeInput(std::string str);
        
private:
        static std::map<std::string, float> _rates;
        static std::map<std::string, float> _ratesValue;
        
        BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &src);
        ~BitcoinExchange(void);
};
std::string truncateDate(std::string buffer);
double  truncateExchangeRate(std::string buffer);
float  truncateValue(std::string buffer);
// void storeData(void);
bool    controlDate(std::string date);



#endif
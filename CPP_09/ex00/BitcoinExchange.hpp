/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:09 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/25 14:52:24 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXHCANGE_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>

class BitcoinExchange
{
public:
        void    storing(std::string const filename);
private:
        BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &src);
        ~BitcoinExchange(void);
}

#endif
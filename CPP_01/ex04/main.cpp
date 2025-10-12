/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:06:16 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 15:31:32 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
    std::ofstream outfile (argv[1]);

    std::ofstream test;
    // std::string test = strcat(outfile.c_str(), ".replace");
    outfile << "ceci est un test" << std::endl;
    test << outfile.rdbuf();
    // std::cout << test ;
    outfile.close();
    test.close();
    
    return 0;
    
}
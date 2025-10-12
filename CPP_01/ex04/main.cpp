/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:58:11 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 20:31:31 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>


int main(int argc, char **argv)
{

    if (argc != 4)
    {
        std::cout << "<filename> <s1> <s2>" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string buffer;
    std::ifstream infile;
    std::ofstream outfile;
    
    std::string filename = (std::string)argv[1] + ".replace";
    
    infile.open(argv[1]);
    if (infile.is_open() == true)
    {
        outfile.open(filename.c_str(), std::ios::out);
        if (outfile.is_open() == true)
        {
            while (std::getline(infile, buffer))
            {
                if (buffer.find(argv[2]) != std::string::npos)
                {
                    int i = 0;
                    int j = 0;
                    std::string temp;
                    while (i <  buffer.find(argv[2]))
                        i++;
                    while(j < i)
                    {
                        temp += buffer[j];
                        j++;
                    }
                    
                    temp += (std::string)argv[3];
                    std::string find_size = argv[3];
                    std::string to_find = argv[2];
                    j += find_size.size(); 
                    i += to_find.size();
                    while (buffer[i])
                    {
                        temp += buffer[i];
                        i++;
                        j++;
                    }
                    buffer = temp;
                }
                outfile << buffer << "\n";
            }
        }
        else
        {
            outfile.close();
            std::perror("outfile error\n");
            return (EXIT_FAILURE);
        }
    }
    else
    {
        std::perror("infile error\n");
        return (EXIT_FAILURE);
    }
    infile.close();
    outfile.close();
    return (EXIT_SUCCESS);
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:06:16 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/12 16:03:33 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <cctype>

//my bad ne pas creer le fichier a la base mais seulement open
//seulement le fichier .replace doit etre creer
//std::strinh::find
//std::string::substr
//std::ifstream pour ouvrir le fichier 
//std::getline pour recuperer les lignes
//std::ofstream pour ecrire dans un nouveau fichier

int main(int argc, char **argv)
{
    std::ofstream outfile (argv[1]);

    std::string test1 = argv[1];
    std::string test2 = ".replace";
    std::string test3 = test1 + test2;
    std::ofstream test (test3);
    
    outfile << "ceci est un test" << std::endl;
    outfile.close();
    
    std::ifstream infile (argv[1]);
    
    test << infile.rdbuf();

    infile.close();
    test.close();
    
    return 0;
    
}
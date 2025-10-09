/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:38:48 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/06 12:58:51 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int j = 1; j < argc; j++)
		{
			for (int i = 0; argv[j][i]; i++)
			{
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
					argv[j][i] = toupper(argv[j][i]);
			}
			std::cout << argv[j];
		}
		std::cout << "" << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
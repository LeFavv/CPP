/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:36:11 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/11 16:45:38 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        //mettre un message 
        return (NULL);
    }
    Zombie* horde = new Zombie[N]; //faut il check si l'alloc avec new fail ???
    for (int i = 1; i <= N; i++)
    {
       horde[i - 1].set_name_index(i, name);
    }
    return (horde);
}

// int main() {
//     try {
//         int* p = new int[100000000000000]; // allocation impossible
//     }
//     catch (const std::bad_alloc& e) {
//         std::cerr << "Erreur : " << e.what() << '\n';
//     }
// }
//a voir si c'est utile ou non
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:37:35 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:37:53 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) 
{
    Zombie* zombies;
    int N = 3;

    zombies = zombieHorde(N, "Foo");
    for(int i = 0; i < N; i++) 
        zombies[i].announce();
    delete[] zombies;
    
}

//void __attribute__ ((destructor)) asd()
//{
//    system("leaks zombieHorde");
//}
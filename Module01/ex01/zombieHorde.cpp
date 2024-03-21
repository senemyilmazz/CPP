/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:37:42 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:37:48 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}
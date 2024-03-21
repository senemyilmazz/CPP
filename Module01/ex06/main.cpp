/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:39:04 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:39:05 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char* av[])
{
    Harl harl;

    if (ac == 2) 
        harl.complain(av[1]);
    else
        std::cout << "Invalid parameter." << std::endl;
    return (0);
}
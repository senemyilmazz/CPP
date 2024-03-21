/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:38:17 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:38:18 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " throws his "
					<< "fists." << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
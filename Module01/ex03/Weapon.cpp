/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:38:29 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:38:30 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType() const
{
	return this->type;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

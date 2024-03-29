/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:55:04 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:55:05 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called." << std::endl;
    this->type = "unknown";
}

Animal::Animal(const std::string& type)
{
    std::cout << "Animal constructor for " << type << "  called." << std::endl;
    this->type = type;
}

Animal::Animal(const Animal& copyObject)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = copyObject;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Animal& Animal::operator=(const Animal& copyObject)
{
    std::cout << "Assignment operator called." << std::endl;
    this->type = copyObject.getType();
    return *this;
}

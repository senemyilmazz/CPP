/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:54:20 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:54:21 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called." << std::endl;
    this->type = "unknown";
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

void Animal::makeSound() const
{
    std::cout << "Unknown sound." << std::endl;
}

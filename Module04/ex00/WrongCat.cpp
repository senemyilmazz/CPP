/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:54:34 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:59:16 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called." << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copyObject) : WrongAnimal(copyObject)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copyObject)
{
    std::cout << "WrongCat copy assignment operator called." << std::endl;
    this->type = copyObject.getType();
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow <3" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:55:35 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:55:36 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Cure default constructor called." << std::endl;
}


Cure::Cure(const Cure& copyObject) : AMateria(copyObject)
{
    // std::cout << "Cure copy constructor called." << std::endl;
    *this = copyObject;
} 

Cure::~Cure()
{
    // std::cout << "Cure copy destructor called." << std::endl;
}

Cure& Cure::operator=(const Cure& copyObject)
{
    this->type = copyObject.getType();
    return *this;
}

AMateria* Cure::clone() const
{
    AMateria* clone = new Cure(*this);
    if (!clone)
    {
        std::cout << "Allocation error!" << std::endl;
        exit(1);
    }
    return clone;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& copyObject);
        ~Ice();
        Ice& operator=(const Ice& copyObect);

        AMateria* clone() const;
        void use(ICharacter& target);
};

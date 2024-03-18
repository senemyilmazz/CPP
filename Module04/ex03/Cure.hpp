#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& copyObject);
        ~Cure();
        Cure& operator=(const Cure& copyObect);

        AMateria* clone() const;
        void use(ICharacter& target);

};

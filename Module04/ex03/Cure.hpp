#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& copyObject);
        ~Cure() override;
        Cure& operator=(const Cure& copyObect);

        AMateria* clone() const override;
        void use(ICharacter& target) override;

};

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& copyObject);
        ~Ice() override;
        Ice& operator=(const Ice& copyObect);

        AMateria* clone() const override;
        void use(ICharacter& target) override;
};

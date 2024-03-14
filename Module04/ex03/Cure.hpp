#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& copyObject);
        ~Cure();
        Cure& operator=(const Cure& copyObect);

        AMateria* clone() const override;
        void use(ICharacter& target) override;

};

#endif
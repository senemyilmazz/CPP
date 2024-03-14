#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& copyObject);
        ~Ice();
        Ice& operator=(const Ice& copyObect);

        AMateria* clone() const override;
        void use(ICharacter& target) override;
};

#endif
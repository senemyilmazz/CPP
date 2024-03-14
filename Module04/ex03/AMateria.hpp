#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& copyObject);
        ~AMateria();
        AMateria& operator=(const AMateria& copyObject);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};

#endif
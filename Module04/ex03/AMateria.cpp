#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    // std::cout << "AMateria type specific constructor called." << std::endl;
    this->type = type;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria destructor called." << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria do nothing to " << target.getName() << std::endl;
}

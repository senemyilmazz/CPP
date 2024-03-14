#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria type specific constructor called." << std::endl;
    this->type = type;
}
AMateria::AMateria(const AMateria& copyObject)
{   
    std::cout << "AMateria copy constructor called." << std::endl;
    *this = copyObject;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copyObject)
{
    std::cout << "AMateria copy assignment operator called." << std::endl;
    this->type = copyObject.getType();
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria do nothing to " << target.getName() << std::endl;
}


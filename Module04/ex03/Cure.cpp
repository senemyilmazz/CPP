#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called." << std::endl;
}


Cure::Cure(const Cure& copyObject) : AMateria(copyObject)
{
    std::cout << "Cure copy constructor called." << std::endl;
    *this = copyObject;
} 

Cure& Cure::operator=(const Cure& copyObject)
{

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
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

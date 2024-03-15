#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice& copyObject) : AMateria(copyObject)
{
    // std::cout << "Ice copy constructor called." << std::endl;
    *this = copyObject; 
} 

Ice::~Ice()
{

}

Ice& Ice::operator=(const Ice& copyObject)
{
    this->type = copyObject.getType();
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria* clone = new Ice(*this);
    if (!clone)
    {
        std::cout << "Allocation error!" << std::endl;
        exit(1);
    }
    return clone;
}

void Ice::use(ICharacter& target)
{
    std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called." << std::endl;
    this->type = "unknown";
}

WrongAnimal::WrongAnimal(const std::string& type)
{
    std::cout << "WrongAnimal constructor for " << type << "  called." << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copyObject)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = copyObject;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copyObject)
{
    std::cout << "Assignment operator called." << std::endl;
    this->type = copyObject.getType();
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Unknown sound." << std::endl;
}

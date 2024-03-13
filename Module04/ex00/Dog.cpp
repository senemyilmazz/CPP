#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& copyObject) : Animal(copyObject)
{
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark!" << std::endl;
}
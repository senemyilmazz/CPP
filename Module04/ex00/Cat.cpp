#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& copyObject) : Animal(copyObject)
{
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow <3" << std::endl;
}
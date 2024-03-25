#include "Fixed.hpp"

const int Fixed::fractialBits = 8;

Fixed::Fixed() 
{
    std::cout << "Default constructor called." << std::endl;
    this->rawBits = 0;
}

Fixed::Fixed(const Fixed& copyObject) 
{
    std::cout << "Copy constructor called." << std::endl;
    *this = copyObject;
}

Fixed& Fixed::operator=(const Fixed& copyObject) 
{
    std::cout << "Copy assignment operator called." << std::endl;
    this->rawBits = copyObject.getRawBits();
    return *this;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called." << std::endl; 
}

int Fixed::getRawBits() const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->rawBits = raw;
}
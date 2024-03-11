#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->rowBits = 0;
}

Fixed::Fixed(const int row)
{
    std::cout << "Int constructor called." << std::endl;
    this->rowBits = (row << Fixed::fractialBits);
}

Fixed::Fixed(const float row)
{
    std::cout << "Float constructor called." << std::endl;
    this->rowBits = roundf(row * (1 << Fixed::fractialBits));
}

Fixed::Fixed(const Fixed& copyObject)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = copyObject;
}

Fixed& Fixed::operator=(const Fixed& copyObject)
{
    std::cout << "Copy assignment operator called." << std::endl;
    this->rowBits = copyObject.getRowBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

int Fixed::getRowBits() const
{
    return this->rowBits;
}

float Fixed::toFloat() const 
{
    return ((float)this->rowBits / (1 << Fixed::fractialBits));
}

int Fixed::toInt() const
{
    return (this->rowBits >> Fixed::fractialBits);
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    output << fixed.toFloat();
    return output;
}
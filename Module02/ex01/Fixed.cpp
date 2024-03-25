#include "Fixed.hpp"

const int Fixed::fractialBits = 8;

//Constructors
Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->rawBits = 0;
}

Fixed::Fixed(const int raw)
{
    std::cout << "Int constructor called." << std::endl;
    this->rawBits = raw * (1 << Fixed::fractialBits);
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor called." << std::endl;
    this->rawBits = roundf(raw * (1 << Fixed::fractialBits));
}

Fixed::Fixed(const Fixed& copyObject)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = copyObject;
}

//Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

//Properties
int Fixed::getRawBits() const
{
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

//Methods
float Fixed::toFloat() const 
{
    return ((float)this->rawBits / (1 << Fixed::fractialBits));
}

int Fixed::toInt() const
{
    return (this->rawBits / (1 << Fixed::fractialBits));
}

//Operator Overloadings
Fixed& Fixed::operator=(const Fixed& copyObject)
{
    std::cout << "Copy assignment operator called." << std::endl;
    this->rawBits = copyObject.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    output << fixed.toFloat();
    return output;
}
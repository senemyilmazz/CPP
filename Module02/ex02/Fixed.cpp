#include "Fixed.hpp"

//Constructors
Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->rawBits = 0;
}

Fixed::Fixed(const int row)
{
    std::cout << "Int constructor called." << std::endl;
    this->rawBits = (row << Fixed::fractialBits);
}

Fixed::Fixed(const float row)
{
    std::cout << "Float constructor called." << std::endl;
    this->rawBits = (roundf(row * (1 << Fixed::fractialBits)));
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

//Preporties
int Fixed::getRawBits() const
{
    return this->rawBits;
}

//Methods
int Fixed::toInt() const
{
    return (this->rawBits >> Fixed::fractialBits);
}

float Fixed::toFloat() const
{
    return ((float)this->rawBits / (1 << Fixed::fractialBits));
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
    return fixed1 < fixed2 ? fixed1 : fixed2; 
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
    return fixed1 < fixed2 ? fixed1 : fixed2; 
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
    return fixed1 > fixed2 ? fixed1 : fixed2; 
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
    return fixed1 > fixed2 ? fixed1 : fixed2; 
}

//Operator Overloadings
//  Copy Assignment operator
Fixed& Fixed::operator=(const Fixed& copyObject)
{
    std::cout << "Copy assignment operator called." << std::endl;
    this->rawBits = copyObject.getRawBits();
    return *this;
}

//  Comparison operators
bool Fixed::operator>(const Fixed& otherFixed) const
{
    return this->toFloat() > otherFixed.toFloat();
}

bool Fixed::operator<(const Fixed& otherFixed) const
{    
    return this->toFloat() < otherFixed.toFloat();
}

bool Fixed::operator>=(const Fixed& otherFixed) const
{
    return this->toFloat() >= otherFixed.toFloat();
}

bool Fixed::operator<=(const Fixed& otherFixed) const
{
    return this->toFloat() <= otherFixed.toFloat();
}

bool Fixed::operator==(const Fixed& otherFixed) const
{
    return this->toFloat() == otherFixed.toFloat();
}

bool Fixed::operator!=(const Fixed& otherFixed) const
{
    return this->toFloat() != otherFixed.toFloat();
}

//  Aritmetic Operators
Fixed Fixed::operator+(const Fixed& otherFixed) const
{
    Fixed retObject = Fixed(this->toFloat() + otherFixed.toFloat());
    return retObject;
}

Fixed Fixed::operator-(const Fixed& otherFixed) const
{
    Fixed retObject = Fixed(this->toFloat() - otherFixed.toFloat());
    return retObject;
}

Fixed Fixed::operator*(const Fixed& otherFixed) const
{
    Fixed retObject = Fixed(this->toFloat() * otherFixed.toFloat());
    return retObject;
}

float Fixed::operator/(const Fixed& otherFixed) const
{
    // Fixed retObject =Fixed(this->toFloat() / otherFixed.toFloat());
    return this->toFloat() / otherFixed.toFloat();
}

//  Increment Operator
//   Pre-Increment
Fixed& Fixed::operator++()
{
    this->rawBits +=  1;
    return *this;
}
//   Post-Increment
Fixed Fixed::operator++(int)
{
    Fixed returnObj = Fixed(*this);
    this->rawBits += 1;
    return returnObj;
}
//  Decrement Oparetor
//   Pre-Decrement
Fixed& Fixed::operator--()
{
    this->rawBits -=  1;
    return *this;
}
//   Post-Decrement
Fixed Fixed::operator--(int)
{
    Fixed returnObj = Fixed(*this);
    this->rawBits -= 1;
    return returnObj;
}

//  Output operator
std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    output << fixed.toFloat();
    return output;
}
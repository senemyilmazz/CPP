#include "Point.hpp"

//Constructors
Point::Point() : x(Fixed(0)) , y(Fixed(0)) 
{
    // std::cout << "Default constructor called." << std::endl;
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
    // std::cout << "Constructor with parameters called." << std::endl;
}

Point::Point(const Point& copyObject) : x(Fixed(copyObject.getX())), y(Fixed(copyObject.getY()))
{
    // std::cout << "Copy constructor called." << std::endl;
    *this = copyObject;
}

//Destructor
Point:: ~Point()
{
    //std::cout << "Point Destructor called." << std::endl;
}

//Operator Overloading
Point& Point::operator=(const Point& copyObject)
{
    (void)copyObject;
    return *this;
}

//Properties
const Fixed Point::getX() const
{
    return this->x;
}

const Fixed Point::getY() const
{
    return this->y;
}

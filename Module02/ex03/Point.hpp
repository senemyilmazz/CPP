#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& copyObject);
        ~Point();

        const Fixed getX() const;
        const Fixed getY() const;

        Point& operator=(const Point& copyObject);
};

#endif
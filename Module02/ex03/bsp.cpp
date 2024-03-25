#include "Point.hpp"

float areaCalculator(const Point& k, const Point& l, const Point& m)
{
    float area;
    float kx = k.getX().toFloat();
    float ky = k.getY().toFloat();
    float lx = l.getX().toFloat();
    float ly = l.getY().toFloat();
    float mx = m.getX().toFloat();
    float my = m.getY().toFloat();

    //Formula for calculating the area of a triangle with three known points.
    area = (((kx*ly) + (lx*my) + (mx*ky)) - ((ky*lx) + (ly*mx) + (my*kx))) / 2.0;
    if (area < 0.0)
        area *= -1.0;
    return area;
}

bool edgecheck(const Point& k, const Point& l, const Point& p)
{
    float kx = k.getX().toFloat();
    float ky = k.getY().toFloat();
    float lx = l.getX().toFloat();
    float ly = l.getY().toFloat();
    float x = p.getX().toFloat();
    float y = p.getY().toFloat();

    //Formula for the equation of the line. If point p ((x,y)) is on the line, the result is 0.
    if ((x - kx)*(ly-ky) - (y-ky)*(lx-kx) != 0)
        return true;
    return false;
}

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
    //Calculate the area of the given triangle.
    float abc = areaCalculator(a, b, c);        
    //Calculate areas of all possible triangles including 'point' 
    float abp = areaCalculator(a, b, point);    
    float acp = areaCalculator(a, c, point);
    float bcp = areaCalculator(b, c, point);
    //If the 'point' is inside or on the edge of the given triangle, sum of all possible triangle areas is equal to the main triangle area.
    if (abc >= abp + acp + bcp)
        //If the 'point' is on the edge of the triangle, it is not inside.
        if (edgecheck(a, b, point) &&  edgecheck(a, c, point) && edgecheck(b, c, point))
            return true;
    return false;
}


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

    area = (((kx*ly) + (lx*my) + (mx*ky)) - ((lx*ky) + (ly*mx) + (my*kx))) / 2.0;

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
    float px = p.getX().toFloat();
    float py = p.getY().toFloat();

    if ((px - kx)*(ly-ky) - (py-ky)*(lx-kx) != 0)
        return true;
    return false;
}

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
    float abc = areaCalculator(a, b, c);
    float abp = areaCalculator(a, b, point);
    float acp = areaCalculator(a, c, point);
    float bcp = areaCalculator(b, c, point);

    if (abc >= abp + acp + bcp)
        if (edgecheck(a, b, point) &&  edgecheck(a, c, point) && edgecheck(b, c, point))
            return true;
    return false;
}

int main()
{
    std::cout << bsp(Point(-5, 6), Point(-11, -3), Point(8, -7), Point(-5, 5.6)) << std::endl;
}
#include "Rectangle.h"

double Rectangle::totalArea = 0;

Rectangle::Rectangle(double x1, double y1, double x2, double y2)
    : x1(x1), y1(y1), x2(x2), y2(y2)
{
    calculateArea();
    totalArea += area;
}

Rectangle::~Rectangle()
{
    totalArea -= area;
}

void Rectangle::calculateArea()
{
    area = (x2 - x1) * (y2 - y1);
}

double Rectangle::getTotalArea()
{
    return totalArea;
}

bool Rectangle::isInside(double x, double y, bool countBorder) const
{
    if (countBorder)
    {
        return x >= x1 && x <= x2 && y >= y1 && y <= y2;
    }
    else
    {
        return x > x1 && x < x2 && y > y1 && y < y2;
    }
}

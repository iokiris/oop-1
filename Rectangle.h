#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle(double x1, double y1, double x2, double y2);
    ~Rectangle();

    static double getTotalArea();
    bool isInside(double x, double y, bool countBorder = true) const;

private:
    double x1, y1;
    double x2, y2;
    double area;

    static double totalArea;
    void calculateArea();
};

#endif // RECTANGLE_H

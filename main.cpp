#include <iostream>
#include "Rectangle.h"

int main()
{
    Rectangle rect1(0, 0, 5, 5);
    Rectangle rect2(1, 1, 4, 4);

    std::cout << "Total area: " << Rectangle::getTotalArea() << std::endl;

    std::cout << "Is (3,3) inside rect1? " << rect1.isInside(3, 3) << std::endl;
    std::cout << "Is (5,5) on the border of rect1? " << rect1.isInside(5, 5) << std::endl;

    return 0;
}

// commit 1

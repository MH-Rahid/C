#include <stdio.h>

float areaOfRect(float height, float breadth) {

    float area;
    area = height * breadth;

    return area;
}

int main(int argc, char const* argv[])
{
    float height, breadth;
    height = 5;
    breadth = 7;

    float areaOfRectangle = areaOfRect(height, breadth);

    printf("Area Of Rectangle is : %10.2f", areaOfRectangle);

    return 0;
}

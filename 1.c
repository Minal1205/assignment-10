#include <stdio.h>
//a function to calculate the area of a circle. (TSRS)
float area(int r);
int main()
{
    int radius;
    printf("Enter Radius\n");
    scanf("%d", &radius);
    float ar = area(radius);
    printf("Area of circle with radius %d is %0.2f;", radius, ar);

    return 0;
}
float area(int r)
{
    float ar = 3.14 * r * r;
    return ar;
}
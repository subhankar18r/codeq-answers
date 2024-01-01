#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) (x * x)
int main()
{
    double radius = 5.0;
    double area = PI * SQUARE(radius);
    printf("Area of the circle: %lf\n", area);
    return 0;
}

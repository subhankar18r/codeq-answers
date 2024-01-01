#include <stdio.h>
void increment(int *x)
{
    (*x)++;
}
int main()
{
    int num = 5;
    increment(&num);
    printf("Modified value: %d\n", num); // Output: Modified value: 6
    return 0;
}

#include <stdio.h>
void increment(int x)
{
    x++;
}
int main()
{
    int num = 5;
    increment(num);
    printf("Original value: %d\n", num); // Output: Original value: 5
    return 0;
}
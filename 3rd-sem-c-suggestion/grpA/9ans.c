#include <stdio.h>
int main()
{
    int num = 16;
    int result = num >> 2; // Right shift by 2: 4
    printf("Result: %d\n", result);
    num = 5;
    result = num << 3; // Left shift by 3: 40
    printf("Result: %d\n", result);
    return 0;
}
output : Result : 4 Result : 40

#include <stdio.h>
// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to calculate LCM using GCD
int calculateLCM(int a, int b)
{
    return ((a * b) / calculateGCD(a, b));
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int lcm = calculateLCM(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}
#include <stdio.h>
int main()
{
    // Declaration and Initialization
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // Accessing elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}

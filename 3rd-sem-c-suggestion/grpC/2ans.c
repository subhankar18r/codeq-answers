#include <stdio.h>
int main()
{
    int i = 1;

    // Using goto to jump to a label
    goto label;

    // This code will be skipped
    printf("This won't be printed\n");
label:
    // This code will be executed
    printf("Value of i: %d\n", i);

    return 0;
}

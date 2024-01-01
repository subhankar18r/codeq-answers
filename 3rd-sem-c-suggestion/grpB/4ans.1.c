#include <stdio.h>
void exampleFunction()
{
    int localVar = 10;
    printf("Local Variable: %d\n", localVar);
}
int main()
{
    exampleFunction();
    // printf("%d\n", localVar); // Error: localVar not accessible here
    return 0;
}
